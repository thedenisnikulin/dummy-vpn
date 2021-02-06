#include <string.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SERVER_PORT 8091
#define SERVER_BACKLOG 10
#define BUF_DATA_SIZE 4096
#define CONN_ESTABLISHED "HTTP/1.0 200 Connection established\r\n\r\n"


static char remote_addr_static[15];

//void	server_setup()
int main() 
{
	int temp;
	char *line_token;

	int client_sockfd;
	int server_sockfd;
	int remote_sockfd;
	
	char buf_client_data[BUF_DATA_SIZE];
	char buf_remote_data[BUF_DATA_SIZE];
	char temp_buf[BUF_DATA_SIZE];

	int pipefd[2];
	int fork_return;
	
	struct sockaddr_in server_addr;
	struct sockaddr_in remote_addr;

	int server_addr_len = sizeof (server_addr);
	int remote_addr_len = sizeof (remote_addr);

	server_addr.sin_family = AF_INET;
	server_addr.sin_port = htons(SERVER_PORT);
	server_addr.sin_addr.s_addr = inet_addr("0.0.0.0");

	server_sockfd = socket(AF_INET, SOCK_STREAM, 0);
	bind(server_sockfd, (struct sockaddr *) &server_addr, server_addr_len);
	listen(server_sockfd, SERVER_BACKLOG);
	client_sockfd = accept(server_sockfd, (struct sockaddr *) &server_addr, (socklen_t *) &server_addr_len);
	
	for (;;) {
		if (recv(client_sockfd, buf_client_data, BUF_DATA_SIZE, 0) == -1)
		{
			perror("recv data");
			close(server_sockfd);
		}
		send(client_sockfd, CONN_ESTABLISHED, strlen(CONN_ESTABLISHED), 0);

		memcpy(temp_buf, buf_client_data, BUF_DATA_SIZE);
		printf("[ <- ] client: data: \n%s\n", buf_client_data);

		if (pipe(pipefd) < 0)
		{
			perror("pipe");
			exit(1);
		}

		// --- CHILD ---
		if ((fork_return = fork()) == 0)
		{
			close(pipefd[0]);

			line_token = strtok(temp_buf, "\n"); // get addr
			remote_sockfd = socket(AF_INET, SOCK_STREAM, 0);
			remote_addr.sin_family = AF_INET;
			remote_addr.sin_addr.s_addr = inet_addr(line_token);
			line_token = strtok(NULL, "\n"); // get port
			remote_addr.sin_port = htons(atoi(line_token));

			connect(remote_sockfd, (struct sockaddr *) &remote_addr, remote_addr_len);

			line_token = strtok(NULL, ""); // get payload
			printf("[ -> ] remote: \n%.*s\n", BUF_DATA_SIZE, line_token);
			if (send(remote_sockfd, line_token, BUF_DATA_SIZE, 0) == -1)
			{
				perror("send to remote");
				close(server_sockfd);
			}

			if (recv(remote_sockfd, buf_remote_data, BUF_DATA_SIZE, 0) == -1)
			{
				perror("recv from remote");
				close(server_sockfd);
			}
			printf("[ <- ] remote:\n%.*s\n[ end ]\n", BUF_DATA_SIZE, buf_remote_data);
			write(pipefd[1], buf_remote_data, BUF_DATA_SIZE);
		}
		// --- PARENT ---
		else
		{
			close(pipefd[1]);
			read(pipefd[0], buf_remote_data, BUF_DATA_SIZE); // writing to same buf
			send(client_sockfd, buf_remote_data, BUF_DATA_SIZE, 0);
		}
	}
}

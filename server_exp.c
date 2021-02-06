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
		memset(buf_client_data, 0, BUF_DATA_SIZE);
		memset(buf_remote_data, 0, BUF_DATA_SIZE);
		memset(temp_buf, 0, BUF_DATA_SIZE);

		if (recv(client_sockfd, buf_client_data, BUF_DATA_SIZE, 0) == -1)
		{
			perror("recv data");
			close(server_sockfd);
		}
		printf("[ <- client ] data:\n");
	//	for (int i = 0; i < 1024; i++)
	//		printf("%02X ", buf_client_data[i]);
		printf("\n");
			//printf("%c", buf_client_data[i]);
		//printf("%.*s\n", BUF_DATA_SIZE, buf_client_data);
		
		memcpy(temp_buf, buf_client_data, BUF_DATA_SIZE);
		
		remote_sockfd = socket(AF_INET, SOCK_STREAM, 0);
		remote_addr.sin_family = AF_INET;

		line_token = strtok(temp_buf, "\n"); // get addr
		remote_addr.sin_addr.s_addr = inet_addr(line_token);
		printf("token: %s\n", line_token);

		line_token = strtok(NULL, "\n"); // get port
		remote_addr.sin_port = htons(atoi(line_token));
		printf("token: %s\n", line_token);

		if (connect(remote_sockfd, (struct sockaddr *) &remote_addr, remote_addr_len) == -1)
		{
			perror("connect to remote");
		}

		line_token = strtok(NULL, ""); // get payload
		printf("[ -> remote ] token with payload:\n");
	//	for (int i = 0; i < 100; i++)
	//		printf("%02X ", line_token[i]);
		printf("\n");

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

		printf("[ <- remote ] data:\n");
	//	for (int i = 0; i < BUF_DATA_SIZE; i++)
	//		printf("%02X ", buf_remote_data[i]);
		printf("\n");
		if (send(client_sockfd, buf_remote_data, BUF_DATA_SIZE, 0) == -1)
		{
			perror("send to client");
		}
	}
}

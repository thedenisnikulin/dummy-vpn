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

int parse_addr(char *buf, int n)
{
	// Assume address && port are stored in buf at the beginning
	// in such format: xx.xx.xx.xx:yyyyy
	int i;

	i = 0;
	while (buf[i] != ':' && i < n)
	{
		remote_addr_static[i] = buf[i];
		i++;
	}
	
	remote_addr_static[i+1] = '\0';

	// return the start index of port
	return (i+2);
}

int parse_port(char *buf, int n, int start_index)
{
	int i;
	int k;
	char port_buf[5];

	i = 0;
	k = start_index;
	while (buf[k] != '\n' && k < n)
	{
		port_buf[i] = buf[k];
		i++;
		k++;
	}

	return atoi(port_buf);
}

void clear_addr_data(char *dirty_buf, char *clean_buf, int len)
{
	int i;
	int k;

	i = 0;

	// pad to the end of the address:port line
	while (dirty_buf[i] != '\n' && i < len) i++;

	i++;
	
	// write clean data to clean_buf
	k = 0;
	while (i < len)
	{
		clean_buf[k] = dirty_buf[i];
		i++;
		k++;
	}

}

//void	server_setup()
int main() 
{
	int temp;


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

	if (recv(client_sockfd, buf_client_data, BUF_DATA_SIZE, 0) == -1)
	{
		perror("recv from client");
		close(server_sockfd);
	}
	buf_client_data[BUF_DATA_SIZE-1] = '\0';
	printf("[ <- ] from client:\n%s\n[ end ]\n", buf_client_data);

	if (pipe(pipefd) < 0)
	{
		perror("pipe");
		exit(1);
	}

	// --- CHILD ---
	if ((fork_return = fork()) == 0)
	{
		close(pipefd[0]);
		temp = parse_addr(buf_client_data, BUF_DATA_SIZE);

		remote_sockfd = socket(AF_INET, SOCK_STREAM, 0);
		remote_addr.sin_family = AF_INET;
		remote_addr.sin_port = htons(parse_port(buf_client_data, BUF_DATA_SIZE, temp));
		remote_addr.sin_addr.s_addr = inet_addr(remote_addr_static);

		connect(remote_sockfd, (struct sockaddr *) &remote_addr, remote_addr_len);
		
		clear_addr_data(buf_client_data, temp_buf, BUF_DATA_SIZE);

		if (send(remote_sockfd, temp_buf, BUF_DATA_SIZE, 0) == -1)
		{
			perror("send to remote");
			close(server_sockfd);
		}
		memset(temp_buf, 0, BUF_DATA_SIZE);
		memset(buf_client_data, 0, BUF_DATA_SIZE);

		if (recv(remote_sockfd, buf_remote_data, BUF_DATA_SIZE, 0) == -1)
		{
			perror("recv from remote");
			close(server_sockfd);
		}
		buf_remote_data[BUF_DATA_SIZE-1] = '\0';
		printf("[ <- ] from remote:\n%s\n[ end ]\n", buf_remote_data);

		// TODO implement connecting to remote and sending data from client buf to it
		// and writing data to remote buf 
	}
	// --- PARENT ---
	else
	{
		close(pipefd[1]);
		// TODO implement sending data from remote buf back to client
	}
}

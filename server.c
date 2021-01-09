#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

#define SERVER_PORT 8091
#define SERVER_BACKLOG 10

//void	server_setup()
int main() 
{
	int client_sockfd;
	int server_sockfd;
	int remote_sockfd;
	
	char buf_client_data[256];
	char buf_remote_data[256];

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

	recv(client_sockfd, buf_client_data, 128, 0);

	if (pipe(pipefd) < 0)
	{
		perror("pipe");
		exit(1);
	}

	if ((fork_return = fork()) == 0)
	{
		remote_sockfd = socket(AF_INET, SOCK_STREAM, 0);
		remote_addr.sin_family = AF_INET;
		remote_addr.sin_port = htons(/*port*/);
		remote_addr.sin_addr.s_addr = inet_addr(/*addr*/);
		// TODO implement connecting to remote and sending data from client buf to it
		// and writing received data to remote buf
		close(pipefd[0]);
	}
	else
	{
		close(pipefd[1]);
		// TODO implement sending data from remote buf back to client
	}
}

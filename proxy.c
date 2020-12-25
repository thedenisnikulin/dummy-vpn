#include <asm-generic/socket.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <string.h>
#include <arpa/inet.h>
#include <stdio.h>
#define PORT 8080
#define BUFF_SIZE 4096


int main() {
	int serverfd;
	int clientfd;
	char buff[BUFF_SIZE] = {0};
	struct sockaddr_in addr;
	int addrlen = sizeof (addr);
	int reuse = 1;
	
	serverfd = socket(AF_INET, SOCK_STREAM, 0);
	if (serverfd == 0) {
		perror("socket failure");
		return 1;
	}

	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr("0.0.0.0");
	addr.sin_port = htons(PORT);
	
	setsockopt(serverfd, SOL_SOCKET, SO_REUSEADDR, &reuse, sizeof (reuse));
	bind(serverfd, (struct sockaddr *) &addr, sizeof (addr));

	if(listen(serverfd, 4) < 0) {
		perror("listen failure");
		return 1;
	}
	
	clientfd = accept(serverfd, (struct sockaddr *) &addr, (socklen_t *) &addrlen);

	if (recv(serverfd, buff, BUFF_SIZE, 0) < 0) {
		perror("recv failure");
		return 1;
	}

	printf("msg: %s\n", buff);
}

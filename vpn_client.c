#include <stdio.h>
#include <sys/socket.h>
#include <arpa/inet.h>
#include <string.h>
#include <unistd.h>
#include <netinet/in.h>
#define PORT 8091
#define BUFF_SIZE 4096

int main(int argc, char **argv) {
	char serv_addr[15];
	int serverfd;
	int clientfd;
	struct sockaddr_in addr;
	char buff[BUFF_SIZE] = "Hello from my computer!";

	if (argc < 2) {
		printf("usage:\n\t./vpn <ip_address>\n");
		return 1;
	}

	printf("------ program started ------\n");
	strcpy(serv_addr, argv[1]);
	
	addr.sin_family = AF_INET;
	addr.sin_addr.s_addr = inet_addr(serv_addr);
	addr.sin_port = htons(PORT);
	
	clientfd = socket(AF_INET, SOCK_STREAM, 0);
	if (clientfd == 0) {
		perror("socket failure");
		return 1;
	}
	printf("gonna connect to %s:%d\n", serv_addr, PORT);
	if (connect(clientfd, (struct sockaddr *) &addr, sizeof (addr)) < 0) {
		perror("connection failure");
		return 1;
	}
	send(clientfd, buff, BUFF_SIZE, 0);
	printf("sent msg: \"%s\"\n", buff);
}

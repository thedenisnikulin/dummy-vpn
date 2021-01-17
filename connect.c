#define _GNU_SOURCE		// for RTLD_NEXT

#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <netinet/in.h>	// for struct sockaddr_in
#include <arpa/inet.h>	// for inet_addr()

#include "original.h"
#include "core.h"

#define BUF_DATA_SIZE 4096
#define PROXY_ADDR "18.159.133.14"
#define PROXY_PORT 8091

t_connect_func original_connect;
t_send_func original_send;

static char original_addr_static[16];
static int original_port_static;

int connect(int fd, const struct sockaddr *addr, socklen_t len) 
{
	struct sockaddr_in __addr;
	
	original_connect = (t_connect_func) dlsym(RTLD_NEXT, "connect");

	__addr.sin_family = AF_INET;
	__addr.sin_addr.s_addr = inet_addr(PROXY_ADDR);
	__addr.sin_port = htons(PROXY_PORT);
	struct sockaddr_in *casted_addr;

	casted_addr = (struct sockaddr_in *) addr;
	// todo PORT
	// save addr as a global var
	char *dotted_addr = inet_ntoa(casted_addr->sin_addr);

	strcpy(original_addr_static, dotted_addr);
	original_port_static = (int) ntohs(casted_addr->sin_port);

	printf("[ DEBUG ] original connect address: %s\n", dotted_addr);	
	/* DNS lookup - skip for now. Also, skip no-IP connections (e.g. AF_UNIX). */
	if ((strcmp(dotted_addr, "127.0.0.53") == 0) || (casted_addr->sin_family != AF_INET))
	{
		return (*original_connect)(fd, addr, len);
	}

	printf("[ DEBUG ] connect to proxy\n");

	return (*original_connect)(fd, (struct sockaddr *) &__addr, sizeof (__addr));
}

ssize_t send(int fd, const void *buf, size_t n, int flags) 
{
	char buf_with_addr[BUF_DATA_SIZE];
	strncpy(buf_with_addr, original_addr_static, 15);
	strncpy(buf_with_addr, itoa());

	printf("[ DEBUG ] send\n");
	printf("[ DEBUG ] data: \n%s\n[ end ] data\n", (char *) buf);
	original_send = (t_send_func) dlsym(RTLD_NEXT, "send");
	return (*original_send)(fd, buf, n, flags);
}

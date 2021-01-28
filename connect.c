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
#define PROXY_ADDR "18.157.76.100"
#define PROXY_PORT 8091

t_connect_func original_connect;
t_send_func original_send;

static char original_addr_static[16];
static int original_port_static;

int connect(int fd, const struct sockaddr *addr, socklen_t len) 
{
	struct sockaddr_in new_addr;
	
	original_connect = (t_connect_func) dlsym(RTLD_NEXT, "connect");

	new_addr.sin_family = AF_INET;
	new_addr.sin_addr.s_addr = inet_addr(PROXY_ADDR);
	new_addr.sin_port = htons(PROXY_PORT);

	struct sockaddr_in *casted_old_addr;
	casted_old_addr = (struct sockaddr_in *) addr;
	// TODO PORT
	// save addr as a global var
	char *dotted_old_addr = inet_ntoa(casted_old_addr->sin_addr);

	strcpy(original_addr_static, dotted_old_addr);
	original_port_static = (int) ntohs(casted_old_addr->sin_port);

	printf("[ DEBUG ] original connect address: %s\n", dotted_old_addr);	
	/* DNS lookup - skip for now. Also, skip non-IPv4 connections (e.g. AF_UNIX). */
	if ((strcmp(dotted_old_addr, "127.0.0.53") == 0) || (casted_old_addr->sin_family != AF_INET))
	{
		printf("skip\n");
		return (*original_connect)(fd, addr, len);
	}

	printf("[ DEBUG ] connect to proxy\n");

	return (*original_connect)(fd, (struct sockaddr *) &new_addr, sizeof (new_addr));
}

ssize_t send(int fd, const void *buf, size_t n, int flags) 
{
	char temp_buf[BUF_DATA_SIZE];

	memset(temp_buf, 0, BUF_DATA_SIZE);

	// send data delimited by '\n': address, port, payload
	sprintf(temp_buf, "%s\n%d\n%.*s", original_addr_static, original_port_static, (int)n, (char *)buf);

	printf("[ DEBUG ] send\n");
	original_send = (t_send_func) dlsym(RTLD_NEXT, "send");

	if (strcmp(original_addr_static, "127.0.0.53") == 0)
	{
		return (*original_send)(fd, buf, n, flags);
	}

	printf("addr: \n%s", temp_buf);
	(*original_send)(fd, temp_buf, BUF_DATA_SIZE, 0);
	memset(temp_buf, 0, BUF_DATA_SIZE);

	printf("[ DEBUG ] data: \n%s\n[ end ] data\n", (char *) buf);
	return (*original_send)(fd, buf, BUF_DATA_SIZE, flags);
}

#define _GNU_SOURCE		// for RTLD_NEXT

#include <sys/socket.h>
#include <stdio.h>
#include <string.h>
#include <dlfcn.h>
#include <sys/types.h>
#include <netinet/in.h>	// for struct sockaddr_in
#include <arpa/inet.h>	// for inet_addr()
#include "original.h"

#define PROXY_ADDR "18.159.133.14"

t_connect_func original_connect;
t_send_func original_send;


int connect(int fd, const struct sockaddr *addr, socklen_t len) 
{
	struct sockaddr_in __addr;
	
	original_connect = (t_connect_func) dlsym(RTLD_NEXT, "connect");

	__addr.sin_family = AF_INET;
	__addr.sin_addr.s_addr = inet_addr(PROXY_ADDR);
	__addr.sin_port = htons(8091);
	struct sockaddr_in *casted_addr;

	casted_addr = (struct sockaddr_in *) addr;
	// todo PORT
	// save addr as a global var
	char *dottedaddr = inet_ntoa(casted_addr->sin_addr);
	printf("ADDRESS: %s\n", dottedaddr);	
	/* DNS lookup - skip for now. Also, skip no-IP connections (e.g. AF_UNIX). */
	if ((strcmp(dottedaddr, "127.0.0.53") == 0) || (casted_addr->sin_family != AF_INET))
	{
		return (*original_connect)(fd, addr, len);
	}

	printf("[ * ] CONNECT\n");

	return (*original_connect)(fd, (struct sockaddr *) &__addr, sizeof (__addr));
}

ssize_t send(int fd, const void *buf, size_t n, int flags) 
{
	printf("[ * ] SEND\n");
	printf("[ BEG ] OUT: %s\n[ END ] OUT\n", (char *) buf);
	original_send = (t_send_func) dlsym(RTLD_NEXT, "send");
	return (*original_send)(fd, buf, n, flags);
}

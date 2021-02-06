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
#include "util.h"

#define BUF_DATA_SIZE 4096
#define PROXY_ADDR "18.157.76.100"
#define PROXY_PORT 8091

static int is_lib_initialized = 0;
static int static_sockfd = -1;
t_connect_func original_connect;
t_send_func original_send;
t_gethostbyaddr_func original_gethostbyaddr;
t_getaddrinfo_func original_getaddrinfo;
// experimental
t_write_func original_write;

static char original_addr_static[16];
static int original_port_static;

void init_lib()
{
	original_connect = (t_connect_func) dlsym(RTLD_NEXT, "connect");
	original_send = (t_send_func) dlsym(RTLD_NEXT, "send");
	original_gethostbyaddr = (t_gethostbyaddr_func) dlsym(RTLD_NEXT, "gethostbyaddr");
	original_getaddrinfo = (t_getaddrinfo_func) dlsym(RTLD_NEXT, "getaddrinfo");
	original_write = (t_write_func) dlsym(RTLD_NEXT, "write");
	is_lib_initialized = 1;
}

/* 
 * manipulates: 
 * 		static_sockfd, 
 * 		original_addr_static, 
 * 		original_addr_static
 */
int connect(int fd, const struct sockaddr *addr, socklen_t len) 
{
	struct sockaddr_in new_addr;
	
	if (!is_lib_initialized) init_lib();
	static_sockfd = fd;
	
	new_addr.sin_family = AF_INET;
	new_addr.sin_addr.s_addr = inet_addr(PROXY_ADDR);
	new_addr.sin_port = htons(PROXY_PORT);

	struct sockaddr_in *casted_old_addr;
	casted_old_addr = (struct sockaddr_in *) addr;
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

	if (!is_lib_initialized) init_lib();

	memset(temp_buf, 0, BUF_DATA_SIZE);

	// send data delimited by '\n': address, port, payload
	sprintf(temp_buf, "%s\n%d\n%.*s", original_addr_static, original_port_static, (int)n, (char *)buf);

	if (strcmp(original_addr_static, "127.0.0.53") == 0)
	{
		return (*original_send)(fd, buf, n, flags);
	}

	printf("[ SEND ] temp_buf: \n%.*s\n", BUF_DATA_SIZE-2048, temp_buf);
	printf("[ SEND ] temp_buf hex:\n");
	for (int i = 0; i < BUF_DATA_SIZE-2048; i++)
		printf("%02X ", temp_buf[i]);
	printf("\n");
	
	return (*original_send)(fd, temp_buf, BUF_DATA_SIZE, flags);
}

struct hostent *gethostbyaddr(const void *__addr, __socklen_t __len, int __type)
{
	printf("----------------- gethostbyaddr was called!\n");
	if (!is_lib_initialized) init_lib();
	struct sockaddr_in *a;
	a = (struct sockaddr_in *) __addr;
	printf("\n######## gethostbyaddr: %s\n", inet_ntoa(a->sin_addr));

	return (*original_gethostbyaddr)(__addr, __len, __type);
}

int getaddrinfo(const char *restrict __name, const char *restrict __service, const struct addrinfo *restrict __req, struct addrinfo **restrict __pai)
{

	printf("----------------- getaddrinfo was called!\n");
	if (!is_lib_initialized) init_lib();

	return (*original_getaddrinfo)(__name, __service, __req, __pai);
}

ssize_t write(int __fd, const void *__buf, size_t __n)
{
	if (!is_lib_initialized) init_lib();
	// if fd != socketfd that is connected to remote
	if (static_sockfd != __fd)
		return (*original_write)(__fd, __buf, __n);
	if (strcmp(original_addr_static, "127.0.0.53") == 0)
		return (*original_write)(__fd, __buf, __n); 
	
	char *temp_buf;
	int payload_index;
	int retcode;

	temp_buf = malloc(BUF_DATA_SIZE * sizeof (temp_buf));

	memset(temp_buf, 0, BUF_DATA_SIZE);

	sprintf(temp_buf, "%s\n%d\n", original_addr_static, original_port_static);
	payload_index = 0;
	for (int i = 0; i < 50; i++)	// TODO remove literal later
		if (temp_buf[i] == '\n') payload_index = i;
	payload_index++;

	memcpy(&(temp_buf[payload_index]), (char *) __buf, __n); // TODO copy not enough bytes?

	printf("[ write ] temp_buf:\n%.*s\n", BUF_DATA_SIZE, temp_buf);

	printf("[ write ] temp_buf verbose:\n");
	for (int i = 0; i < 100; i++)
		printf("%02X ", temp_buf[i]);
	printf("\n");
	
	retcode = (*original_write)(__fd, temp_buf, BUF_DATA_SIZE);
	free(temp_buf);

	return retcode;
}

#define _GNU_SOURCE		// for RTLD_NEXT

#include <stdio.h>
#include <dlfcn.h>
#include <sys/types.h>
#include "original.h"

t_connect_func original_connect;
t_send_func original_send;

int connect(int __fd, const struct sockaddr *__addr, socklen_t __len) {
	printf("\n[ * ] CONNECT\n");
	original_connect = (t_connect_func) dlsym(RTLD_NEXT, "connect");
	return (*original_connect)(__fd, __addr, __len);
}

ssize_t send(int __fd, const void *__buf, size_t __n, int __flags) {
	printf("\n[ * ] SEND\n");
	printf("\n[ BEG ] OUT: %s\n[ END ] OUT\n", (char *) __buf);
	original_send = (t_send_func) dlsym(RTLD_NEXT, "send");
	return (*original_send)(__fd, __buf, __n, __flags);
}

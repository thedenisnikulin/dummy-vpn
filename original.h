#include <stddef.h>
#include <sys/socket.h>
#include <sys/types.h>
#include <unistd.h>


// define "struct addrinfo" for "getaddrinfo" func
struct addrinfo {
	int				ai_flags;
	int				ai_family;
	int				ai_socktype;
	int 			ai_protocol;
	socklen_t 		ai_addrlen;
	struct sockaddr *ai_addr;
	char 			*ai_canonname;
	struct addrinfo	*ai_next;
};

typedef int (*t_connect_func)(int, const struct sockaddr *, socklen_t);
typedef ssize_t (*t_send_func)(int, const void *, size_t, int);
typedef struct hostent *(*t_gethostbyaddr_func)(const void *, __socklen_t, int);
typedef int (*t_getaddrinfo_func)(const char *__restrict, const char *__restrict, const struct addrinfo *__restrict, struct addrinfo **__restrict);
// experimental
typedef ssize_t (*t_write_func)(int, const void *, size_t);

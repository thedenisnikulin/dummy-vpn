#include <stddef.h>
#include <sys/socket.h>
#include <sys/types.h>

typedef int (*t_connect_func)(int, const struct sockaddr *, socklen_t);
typedef ssize_t (*t_send_func)(int, const void *, size_t, int);

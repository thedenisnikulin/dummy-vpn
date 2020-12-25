#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/if.h>
#include <linux/if_tun.h>
#include <time.h>
/* local */
#include "tun.h"

int main()
{
	int fd, nbytes;
	char buf[1024];
	time_t t = time(NULL);
	struct tm tm = *localtime(&t);

	fd = tun_open("tun6");
	if(ioctl(fd, TUNSETPERSIST, 1) < 0){
		perror("enabling TUNSETPERSIST");
		exit(1);
	}
	for (;;) {
		nbytes = read(fd, buf, 1024);
		printf("[ %d:%d ] read %d bytes:\n---\n", tm.tm_hour, tm.tm_min, nbytes);
		fwrite(buf, 1024, 1, stdout);
		printf("\n--- end\n");
	}
}

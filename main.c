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

#define BUFFSIZE 1024

int main()
{
	int fd, nbytes;
	char buf[BUFFSIZE];
	time_t t;
	struct tm tm;

	fd = tun_open("tun6");
	if(ioctl(fd, TUNSETPERSIST, 1) < 0){
		perror("enabling TUNSETPERSIST");
		exit(1);
	}
	printf("program started\n");		// WHAT'S read()? MB SEND PACKETS TO REMOTE AND TRACEROUTE THEM
	for (;;) {							// WHILE USING TUN
		nbytes = read(fd, buf, BUFFSIZE);
		t = time(NULL);
		tm = *localtime(&t);
		printf("[ %d:%d:%d ] read %d bytes:\n------------------------\n", tm.tm_hour, tm.tm_min, tm.tm_sec, nbytes);
		fwrite(buf, BUFFSIZE, 1, stdout);
		printf("\n------------------------ end\n");
	}
}

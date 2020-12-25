#include <linux/if.h>
#include <linux/if_tun.h>
#include <fcntl.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/ioctl.h>
#include <unistd.h>

int tun_open(char *device)
{
	struct ifreq ifr;
	int fd, err;
	
	fd = open("/dev/net/tun", O_RDWR);
	if (fd == -1)
	{
		perror("opening /dev/net/tun");
		exit(1);
	}

	memset(&ifr, 0, sizeof (ifr));
	ifr.ifr_flags = IFF_TUN;
	strncpy(ifr.ifr_ifrn.ifrn_name, device, IFNAMSIZ);
	
	err = ioctl(fd, TUNSETIFF, (void *) &ifr);
	if (err == -1)
	{
		perror("ioctl TUNSETIFF");
		close(fd);
		exit(1);
	}

	return fd;
}

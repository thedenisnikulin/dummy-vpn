#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int main(int argc, char **argv) {
	putenv("LD_PRELOAD=/usr/local/bin/libvpn.so");
	// first arg: command to be executed, 
	// second arg: a pointer to a buffer of arguments that may go after the command
	if (execvp(argv[1], &argv[1]) == -1) {
		perror("failed to execute command");
	}	
}

run:
	gcc -shared -o /usr/local/bin/libvpn.so -fPIC connect.c
	gcc main.c -o proxifier

run:
	gcc -shared -o /usr/local/bin/libvpn.so -fPIC connect.c util.c -ldl
	gcc main.c -o proxifier

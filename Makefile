run:
	gcc -shared -o /usr/local/bin/libvpn.so -fPIC connect.c core.c -ldl
	gcc main.c -o proxifier

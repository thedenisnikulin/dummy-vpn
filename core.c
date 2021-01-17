#include <string.h>

void put_addr(char *addr, char *src_buf, char *dest_buf, int addr_len, int buf_len)
{
	int i;
	int k;

	strncpy(dest_buf, addr, addr_len);
	dest_buf[addr_len+1] = '\n';
	i = addr_len + 2;
	k = 0;
	while (i < buf_len)
	{
		dest_buf[i] = src_buf[k];
		i++;
		k++;
	}
}

void __reverse(char *s)
{
	int i;
	int k;
	char temp;

	i = 0;
	k = strlen(s)-1;
	while (s[i++] != '\0')
	{
	// TODO	
	}
}

void itoa(int n, char *s)
{
	int i;
	int sign;

	sign = 0;
	if (n < 0) sign = 1;

	do
	{
		s[i++] = n % 10;
	}
	while ((n /= 10) > 0);

	if (sign) s[++i] = '-';
	__reverse(s);
}



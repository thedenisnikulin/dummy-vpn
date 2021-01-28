#include <stdio.h>
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
	while (i < k)
	{
		temp = s[i];
		s[i] = s[k];
		s[k] = temp;
		i++;
		k--;
	}
}

void itoa(int n, char s[])
{
	int i;
	int sign;

	i = 0;
	sign = 0;
	if (n < 0) sign = 1;

	do
	{
		s[i++] = n % 10 + '0';
	}
	while ((n /= 10) > 0);

	if (sign) s[i+1] = '-';
	s[i+1] = '\0';
	__reverse(s);
}

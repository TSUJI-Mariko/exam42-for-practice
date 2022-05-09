unsigned char	reverse_bits(unsigned char octet)
{
	int i;
	int res;

	res = 0;
	i = 8;
	while (i > 0)
	{
		res = res * 2 + (octet % 2);
		octet /= 2;
		i--;
	}
	return (res);
}

#include <stdio.h>
int main()
{
	unsigned char c;
	c = 3;
	printf("%d\n", reverse_bits(c));
	return (0);
}


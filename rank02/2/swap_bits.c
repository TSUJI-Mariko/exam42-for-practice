unsigned char swap_bits(unsigned char octet)
{
	unsigned char result;
	unsigned char a;
	unsigned char b;

	a = octet >> 4;
	b = octet << 4;

	result = a | b;
	return (result);
}

#include <stdio.h>
int	main(void)
{
	unsigned char test = 33;
	printf("Should be 12: %d\n", swap_bits(test));
	return (0);
}

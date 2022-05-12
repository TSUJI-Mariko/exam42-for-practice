#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int i;
	char out;

	i = 7;
	unsigned int mask = 1;
	while (i >= 0)
	{
		out = ((octet >> i) & mask) + '0';
			write(1, &out, 1);
		i--;
	}
}

int	main(void)
{
	print_bits(8);
	write(1, "\n", 1);
}


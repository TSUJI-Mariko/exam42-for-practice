#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int gcd(int a, int b)
{
	int nb;
	int gcd;

	nb = a;
	if (a == 0 || b == 0)
		return (0);
	while (nb > 0)
	{
		if (a % nb == 0 && b % nb == 0)
		{
			printf("%d", nb);
			return (0);
		}
		nb--;
	}
}


int main(int argc, char **argv)
{
	if (argc == 3)
		gcd(atoi(argv[1]), atoi(argv[2]));
	printf("\n");
	return (0);
}

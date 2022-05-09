#include <stdio.h>
#include <stdlib.h>


int ft_prime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}


void fprime(int nb)
{
	int i;
	int j;

	i = 2;
	j = 1;
	if (nb == 1)
		printf("%c", '1');
	while (i <= nb)
	{
		if (nb % i == 0 && ft_prime(i) == 1)
		{
			if (j == 1)
				printf("%d", i);
			else
				printf("*%d", i);
			j = 0;
			nb = nb / i;
		}
		else
			i++;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
		fprime(atoi(argv[1]));
	printf("%s", "\n");
	return (0);
}

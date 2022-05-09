#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	char operation;
	int first;
	int second;
	int resultat;

	if (argc == 4)
	{
		first = atoi(argv[1]);
		second = atoi(argv[3]);
		operation = argv[2][0];
		if (operation == '+')
			resultat = first + second;
		else if (operation == '-')
			resultat = first - second;
		else if (operation == '/')
			resultat = first / second;
		else if (operation == '%')
			resultat = first % second;
		else if (operation == '*')
			resultat = first * second;
		printf("%d\n", resultat);
	}
	else 
		ft_putchar('\n');
	return (0);
}


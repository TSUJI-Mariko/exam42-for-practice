#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int checker(char *str, char c, int index)
{
	index--;
	while (index > 0)
	{
		if (str[index] == c)
			return (1);
		index--;
	}
	return (0);
}

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc == 3)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (checker(argv[1], argv[1][i], i) == 0)
				ft_putchar(argv[1][i]);
			i++;
		}
		j = 0;
		while (argv[2][j] != '\0')
		{
			if (checker(argv[1], argv[2][j], i) == 0
				&& checker(argv[2], argv[2][j], j) == 0)
				ft_putchar(argv[2][j]);
			j++;
		}
	}
	ft_putchar('\n');
	return (0);
}

#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int checker(char *str, char c, int index)
{
	int i;

	i = 0;
	while(i < index)
	{
		if (str[i] == c)
			return (1);
		i++;
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
			{
				j = 0;
				while(argv[2][j] != '\0')
				{
					if(argv[1][i] == argv[2][j])
					{
						ft_putchar(argv[1][i]);
						break;
					}
					j++;
				}
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

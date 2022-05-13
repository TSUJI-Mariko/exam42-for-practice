#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		while (argv[1][i] == ' ' || argv[1][i] == '\t')
				i++;
		while (argv[1][i] != '\0')
		{
			if (argv[1][i] == ' ' || argv[1][i] == '\t')
			{
					if (argv[1][i + 1] > 32 && argv[1][i + 1] != '0')
						ft_putchar(' ');
			}
			else if (argv[1][i] != ' ' && argv[1][i] != '\t')
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

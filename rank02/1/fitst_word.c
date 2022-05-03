#include <unistd.h>
void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0' && (argv[1][i] == ' ' || argv[1][i] == '\t'))
			i++;
		while (argv[1][i] != '\0' && (argv[1][i] != ' ' && argv[1][i] != '\t'))
		{
			write(1, &argv[1][i], 1);
			i++;
		}
	}

	ft_putchar('\n');
	return (0);
}

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int ft_isalpha(char c)
{
	if ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	else 
		return (0);
}

int checker(char c)
{
	int check;
	if (c >= 'A' && c <= 'Z')
		check = 'Z' - (c - 'A');
	else if (c >= 'a'&& c <= 'z')
		check = 'z' - (c - 'a');
	return (check);
}

int main(int argc, char **argv)
{
	int i;
	if (argc == 2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (ft_isalpha(argv[1][i]))
			{
				ft_putchar(checker(argv[1][i]));
			}
			else
				ft_putchar(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

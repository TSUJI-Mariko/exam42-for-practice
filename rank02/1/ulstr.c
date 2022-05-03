#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int conversion(char c)
{
	int i;
	if (c >= 'A' && c <= 'Z')
		i = 32;
	else if (c >= 'a' && c <= 'z')
		i = -32;
	else 
		i = 0;
	return (i);
}

int main(int argc, char **argv)
{
	int i;
	int checker;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			checker = conversion(argv[1][i]);
			ft_putchar(argv[1][i] + checker);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

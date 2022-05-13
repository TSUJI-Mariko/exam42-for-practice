#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

int	rotate(char c)
{
	int rotate;
	if ((c >= 'A' && c <= 'M')
		|| (c >= 'a' && c <= 'm'))
		rotate = 13;
	else if ((c >= 'N' && c <= 'Z')
		|| (c >= 'n' && c <= 'z'))
		rotate = - 13;
	else 
		rotate = 0;

	return (rotate);
}

int main(int argc, char **argv)
{
	int i;
	int counter;

	if (argc == 2)
	{
		while(argv[1][i] != '\0')
		{
			counter = rotate(argv[1][i]);
			ft_putchar(argv[1][i] + counter);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}

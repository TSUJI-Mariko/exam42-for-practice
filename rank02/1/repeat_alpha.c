#include <unistd.h>


void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int counter(char c)
{
	int i;
	if (c >= 'A' && c <= 'Z')
		i = c - 'A' + 1;
	if (c >= 'a' && c <= 'z')
		i = c - 'a' + 1;
	else 
		i = 1;
	return (i);

}

int main(int argc, char **argv)
{
	int i;
	int j;
	int repeat;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i] != '\0')
		{
			repeat = counter(argv[1][i]);
			j = 0;
			while(j < repeat)
			{
				ft_putchar(argv[1][i]);
				j++;
			}
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}


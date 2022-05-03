#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int rotone(char c)
{
	int count;

	if ((c >= 'A' && c <= 'Y') || 
		(c >= 'a' && c <= 'y'))
		count = 1;
	else if (c == 'Z' || c == 'z')  
		count = -25;
	else 
		count = 0;
	return (count);
}


int main(int argc, char **argv)
{
	int i;
	int count;

	if (argc ==2)
	{
		i = 0;
		while (argv[1][i] != '\0')
		{
			count = rotone(argv[1][i]);
			ft_putchar(argv[1][i] + count);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}


#include <unistd.h>

void	ft_putchar(char c)
{
		write(1, &c, 1);
}


int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return(i);
}

int main(int argc, char **argv)
{
	int i;

	if (argc == 2)
	{
		i = ft_strlen(argv[1]);
		while(i > -1)
		{
			ft_putchar(argv[1][i]);
			i--;
		}
	}
	ft_putchar('\n');
	return (0);
}

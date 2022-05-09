#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_atoi(char *str)
{
	int i;
	int res;

	res = 0;
	i = 0;
	while(str[i])
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res);
}

void ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + '0');
}

int main(int argc, char **argv)
{
	int i;
	int j;
	i = 1;
	if (argc == 2)
	{
		j = ft_atoi(argv[1]);
		i = i;
		while (i <= 9)
		{
			ft_putchar(i + '0');
			ft_putchar(' ');
			ft_putchar('x');
			ft_putchar(' ');
			ft_putchar(j + '0');
			ft_putchar(' ');
			ft_putchar('=');
			ft_putchar(' ');
			ft_putnbr(i * j);
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}


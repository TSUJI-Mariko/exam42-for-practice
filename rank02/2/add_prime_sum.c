#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_isprime(int nb)
{
	int i;

	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

void	ft_putnbr(int nb)
{
	if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else 
		ft_putchar(nb + '0');
}


int	ft_atoi(char *s)
{
	long res;
	int i;

	i = 0;
	res = 0;
	while(s[i] != '\0')
	{
		res *= 10;
		res += s[i] - '0';
		i++;
	}
	return (res);
}

int ft_add_prime_sum(int nb)
{
	int i;
	int res;
	i = 2;
	res = 0;

	if (nb <= 0)
		return (0);
	while (i <= nb)
	{
		if (ft_isprime(i))
		{
			res += i;
		}
		i++;
	}
	return (res);
}


int main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_putnbr(ft_add_prime_sum(ft_atoi(argv[1])));
	}
	else 
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}


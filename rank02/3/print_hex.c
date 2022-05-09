#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_hex(int nb)
{
	if (nb >= 10 && nb <= 15)
		ft_putchar(nb - 10 + 'a');
	else if (nb >= 16)
	{
		print_hex(nb / 16);
		print_hex(nb % 16);
	}
	else ft_putchar(nb + '0');
}

int	ft_atoi(char *str)
{
	int i;
	int ret;

	ret = 0;
	i = 0;
	while (str[i])
	{
		ret = ret * 10 + str[i] - '0';
		i++;
	}
	return (ret);
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(ft_atoi(argv[1]));
	}
	ft_putchar('\n');
	return (0);
}


#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main()
{
	int i;

	i = 1;
	while (i <= 100)
	{
		if( (i % 3 == 0) && (i % 5 == 0))
		{
			write(1, "fizzbuzz", 8);
			ft_putchar('\n');
			i++;
		}
		else if (i % 3 == 0)
		{
			write(1,"fizz", 4);
			ft_putchar('\n');
			i++;
		}
		else if (i % 5 == 0)
		{
			write(1, "buzz", 4);
			ft_putchar('\n');
			i++;
		}
		else 
		{
			ft_putchar(i / 10 + 48);
			ft_putchar(i % 10 + 48);
			ft_putchar('\n');
			i++;
		}
	}
}

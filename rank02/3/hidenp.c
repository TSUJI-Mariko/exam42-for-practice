#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int main(int argc, char **argv)
{
	int i;
	int j;
	int count;

	count = 0;
	j = 0;
	if (argc == 3)
	{
		i = 0;
		while(argv[1][i])
		{
			while(argv[2][j])
			{
				if(argv[1][i] == argv[2][j])
				{
					count++;
					break;
				}
				j++;
			}
			i++;
		}
	}
	if (argv[1][count] == argv[1][i])
		ft_putchar('1');
	else 
		ft_putchar('0');
	ft_putchar('\n');
	return (0);
}


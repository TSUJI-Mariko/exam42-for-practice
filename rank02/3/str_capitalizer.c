#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	to_upper(char c, char d)
{
	if (c == ' ' || d == '\t')
	{
		if (c <= 'a' && c >= 'z')
			return (1);
	}
	return (0);
}

int to_lower(char c, char d, int i)
{
	if (c != ' ' && c != '\t' && i != -1)
	{
		if(d >= 'A' && d <= 'Z')
		return (1);
	}
	return (0);
}



int main(int argc, char **argv)
{
	int i;
	int j;
	if (argc > 1 )
	{
		i = 1;
		while(argc > i)
		{
			j = 0;
			while(argv[i][j])
			{
				if(argv[i][0] >= 'a' && argv[i][0] <= 'z')
					argv[i][j] -= 32;
				else if (to_lower(argv[i][j - 1], argv[i][j], j - 1))
						argv[i][j] += 32;
				else if (to_upper(argv[i][j - 1], argv[i][j]))
					argv[i][j] -= 32;
				ft_putchar(argv[i][j]);
				j++;
			}
			ft_putchar('\n');
			i++;
		}
	}
	else
		ft_putchar('\n');
	return (0);
}


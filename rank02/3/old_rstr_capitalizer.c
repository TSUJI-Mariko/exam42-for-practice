#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int to_lower(char c, char d)
{
	if ( c >= 'A' && c <= 'Z')
	{
		if(d != ' ' || d != '\t' || d != '\0')
			return (1);
	}
	return (0);
}

int to_upper(char c, char d)
{
	if (c >= 'a' && c <= 'z')
	{
		if (d == ' ' || d == '\t' || d == '\0')
			return (1);
	}
	return (0);
}


int main(int argc, char **argv)
{
	int i;
	int j;
	i = 1;
	if(argc > 1)
	{
		while (i < argc)
		{
			j = 0;
			while(argv[i][j] != '\0')
			{
				if (to_upper(argv[i][j], argv[i][j + 1]))
					argv[i][j] -= 32;
				else if (to_lower(argv[i][j], argv[i][j + 1]))
					argv[i][j] += 32;
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


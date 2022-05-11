#include <unistd.h>

int		ft_isblank(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void	rostring(char *s)
{
	int		i;
	int		first_word; 

	i = 0;
	first_word = 0;

	while (s[i])
	{
		while (ft_isblank(s[i]))
			i++;
		if (s[i] && ft_isblank(s[i]) == 0)
		{
			if (first_word == 0)
			{
				while (s[i] && ft_isblank(s[i]) == 0)
				{
					first_word++;
					i++;
				}
			}
			else
			{
				while (s[i] && ft_isblank(s[i]) == 0)
				{
					write(1, &s[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (ft_isblank(s[i]))
		i++;
	while (first_word > 0)
	{
		write(1, &s[i++], 1);
		first_word--;
	}
}

int		main(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}

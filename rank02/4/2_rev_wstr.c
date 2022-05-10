#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}


void rev_wstr(char *str)
{
	int i;
	int len;
	int first;

	first = 1;
	len = ft_strlen(str);

	while (len >= 0)
	{
		while (len >= 0 && (str[len] == '\0' || str[len] == ' ' || str[len] == '\t'))
			len--;
		i = len;
		while (i >= 0 && str[i] != ' ' && str[i] != '\t')
			i--;
		if (first == 0)
			ft_putchar(' ');
		first = 0;
		write(1, &str[i + 1], len - i);
		len = i;
	}
}

int main (int argc, char **argv)
{
	if (argc ==2)
	{
		rev_wstr(argv[1]);
	}
	ft_putchar('\n');
	return (0);
}

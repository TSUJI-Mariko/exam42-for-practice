#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		write(1, *str[i], 1);
		i++;
	}
}

int word_len(char *str)
{
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t')
		i++;
	return (i);
}


char *word_dup(char *str)
{
	int i;
	char *dup;

	i = word_len(str);
	dup = malloc(sizeof(char) * (i + 1));
	dup[len] = 0;
	while(str)
	{
		dup[i] = str[i];
		i++;
	}
}

int count_words(char *str)
{
	int num;
	int state;

	num = 0;
	state = 1;
	while (str != '\0')
	{
		if (*str == ' ' || *str == '\t')
			state = 1;
		else
		{
			if (*str == '\t' || *str == '\t')
				num++;
			state = 0;
		}
		str++;
	}
	return (num);
}

void fill_str(char **array, char *str)
{
	int count;

}

int main(int argc, char **argv)
{
	int i;
	int count;
	char **tab;

	count = count_words(argv[1]);
	tab = malloc(sizeof(char *) * count + 1);
	if (argc == 2)
	{
		while(count > 0)
		{
			ft_putstr(argv
		}
	}
	ft_putchar('\n');
	return (0);
}


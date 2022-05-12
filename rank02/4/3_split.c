#include <stdlib.h>


int word_len(char *str)
{
	int i;
	i = 0;
	while (str[i] != ' ' && str[i] != '\t' && str[i] != '\n' && str[i] != '\0')
		i++;
	return (i);
}

int count_word(char *str)
{
	int i;
	int state;
	int count;

	i = 0;
	count = 0;
	state = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			state = 1;
		else
		{
			if (state == 1)
				count++;
			state = 0;
		}
		i++;
	}
	return (count);
}

char *duplicate(char *str)
{
	int len;
	int i;
	char *dup;

	i = 0;
	len = word_len(str);
	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);
	dup[len] = '\0';
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}

void filling(char **array, char *str)
{
	int index;
	index = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (str && *str != '\0')
	{
		array[index] = duplicate(str);
		index++;
		while (*str != '\0' &&*str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
}

char **ft_split(char *str)
{
	int len;
	char **tab;

	len = count_word(str);
	tab = malloc(sizeof(char *) * (len + 1));
	if (tab == NULL)
		return (NULL);
	tab[len] = 0;
	filling(tab, str);
	return (tab);
}

#include <stdio.h>

int main()
{
	char c[] = "adfasd asfaskl	sahfa\nsjasdjh		ase";

	char **tab = ft_split(c);
	int i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}

#include <stdlib.h>

int	ft_word_len(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

int count_word(char *str)
{
	int i;
	int state;

	state = 1;
	i = 0;
	while (str && *str != '\0')
	{
		if (*str == ' ' || *str == '\t' || *str == '\n')
			state =1;
		else
		{
			if (state == 1)
				i++;
			state = 0;
		}
		str++;
	}
	return (i);
	
}


char *word_dup(char *str)
{
	char *dup;
	int len;
	int i;

	len = ft_word_len(str);
	dup = malloc(sizeof(char) * len + 1);
	if (dup == NULL)
		return (NULL);
	dup[len] = '\0';
	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	return (dup);
}


void fill_array(char **array, char *str)
{
	int i;

	i = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str != '\0')
	{
		array[i] = word_dup(str);
		++i;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			++str;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			++str;
	}
}


char **ft_split(char *str)
{
	char **array;
	int num;

	num = count_word(str);
	array = malloc(sizeof(char *) * (num + 1));
	if (array == NULL)
		return (NULL);
	array[num] = 0;
	fill_array(array, str);
	return (array);
}
/*
#include <stdio.h>

int main()
{
	char array[] = "coucou  bonjour    		Mariko\n comment	ca va	?";
	char **tab;
	int i;
	tab = ft_split(array);
	i = 0;
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}*/

#include <stdio.h>

int		main(void)
{
	char test[] = "\njrS58VHQ	\n   	p70fL		Kx2sRP0So3E4rC9  \n nebpv3J5ousO84Pa1HjUQOImUhjwZpGn	\n \n	X28iT7Ap9 	DIYAF9ZSpKcs0Rcv\n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";
//	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";

	char **arr = ft_split(test);

	int i = 0;
	while (arr[i] != 0)
	{
		printf("[%s]\n", arr[i]);
		++i;
	}
}


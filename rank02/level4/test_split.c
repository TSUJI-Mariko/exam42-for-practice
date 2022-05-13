#include <stdlib.h>

int word_len(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
		i++;
	return (i);
}

char *duplicate(char *str)
{
	char *duplicate;
	int len;
	int i;

	len = word_len(str);
	i = 0;
	duplicate = malloc(sizeof(char) * (len + 1));
	duplicate[len] = '\0';
	while (i < len)
	{
		duplicate[i] = str[i];
		i++;
	}
	return (duplicate);
}

void fill_word(char **array, char *str)
{
	int index;
	index = 0;
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str++;
	while (*str)
	{
		array[index] = duplicate(str);
		index++;
		while (*str != '\0' && *str != ' ' && *str != '\t' && *str != '\n')
			str++;
		while (*str == ' ' || *str == '\t' || *str == '\n')
			str++;
	}
}

int word_count(char *str)
{
	int i;
	int word;
	i = 0;
	word = 0;

	while (str[i] == ' ' || str[i] == '\t' || str[i] != '\n')
		i++;
	while (str[i])
	{
		word++;
		while (str[i] != '\0' && str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
				//間違えたので注意
			i++;
		while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
			i++;
	}
	return (word);
}
char **ft_split(char *str)
{
	char **array;
	int len;
	len = word_len(str);
	array = malloc(sizeof(char) * (len + 1));
	array[len] = 0;
	fill_word(array, str);
	return (array);
}


#include <stdio.h>
/*
int main()
{
	char **tab;
	char c[] = "bonjour comment				ca va		?";
	int i = 0;
	tab = ft_split(c);
	while (tab[i] != 0)
	{
		printf("%s\n", tab[i]);
		i++;
	}
	return (0);
}
*/
int		main(void)
 {
 char test[] = "\njrS58VHQ	\n   	p70fL		Kx2sRP0So3E4rC9  \n nebpv3J5ousO84Pa1HjUQOImUhjwZpGn	\n \n	X28iT7Ap9 	DIYAF9ZSpKcs0Rcv\n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ	\n2n8R9zUvZEtOwmqf\n	";
 //	char test[] = "DIYAF9ZSpKcs0Rcv \n uzO\n		\nZ7zjEeonALOKQF5xq	\n   \nQxp0b1ufFKGJ\n2n8R9zUvZEtOwmqf\n	";

 	char **arr = ft_split(test);

 	int i = 0;
 	while (arr[i] != 0)
 	{
 		printf("[%s]\n", arr[i]);
 		++i;
 	}
 }


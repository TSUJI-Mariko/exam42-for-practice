#include <unistd.h>


void rev_wstr(char *str)
{
	int i;
	int j;
	int first_word;
	first_word = 1;
	i = 0;
	j = 0;
	
	while (str[i])
		i++;
	while (i >= 0)
	{
		while (i >= 0 && (str[i] == '\0' || str[i] == '\t' || str[i] == ' '))
			i--;
		j = i;
		while (j >= 0 && str[j] != '\t' && str[j] != ' ')
			j--;
		if (first_word == 0)
			write(1, " ", 1);
		first_word = 0;
		write(1, &str[j + 1], i - j);
		i = j;
	}
}

int main(int argc, char **argv)
{
	if (argc == 2)
	{
		rev_wstr(argv[1]);
	}
	write(1, "\n", 1);
	return (0);
}

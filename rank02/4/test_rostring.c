#include <unistd.h>

int checker(char c)
{
	if (c == ' ' || c == '\t')
		return (1);
	return (0);
}

void rostring(char *str)
{
	int i;
	int first_word;

	i = 0;
	first_word = 0;

	while (str[i])
	{
		while (checker(str[i]) == 1)
			i++;
		if (checker(str[i]) != 1)
		{
			if (first_word == 0)
			{
				while (str[i] && checker(str[i]) != 1)
				{
					i++;
					first_word++;
				}
			}
			else
			{
				while (str[i] && checker(str[i]) != 1)
				{
					write(1, &str[i], 1);
					i++;
				}
				write(1, " ", 1);
			}
		}
	}
	i = 0;
	while (checker(str[i]) == 1)
		i++;
	while (first_word > 0)
	{
		write(1, &str[i], 1);
		i++;
		first_word--;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1 &&  *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}

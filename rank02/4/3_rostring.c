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
	int len;

	len = 0;
	i = 0;
	while (str[i] != '\0')
	{
		while (checker(str[i]) == 1)
			i++;
		if (str[i] && checker(str[i]) == 0)
		{
			if (len == 0)
			{
				while (str[i] && checker(str[i]) == 0)
				{
					len++;
					i++;
				}
			}
			else
			{
				while (str[i] && checker(str[i]) == 0)
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
	while (len > 0)
	{
		write(1, &str[i], 1);
		len--;
		i++;
	}
}

int main(int argc, char **argv)
{
	if (argc > 1 && *argv[1])
		rostring(argv[1]);
	write(1, "\n", 1);
	return (0);
}

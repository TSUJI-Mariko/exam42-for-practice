#include <stdlib.h>

int absolute(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int getlen(int nb)
{
	int len;

	len = 0;
	if (nb <= 0)
		len++;
	while (nb != 0)
	{
		len++;
		nb = nb / 10;
	}
	return (len);
}

char *ft_itoa(int nbr)
{
	char *result;
	int len;

	len = getlen(nbr);
	result = malloc(sizeof(char) * len + 1);
	result[len] = '\0';
	if (result == NULL)
		return (NULL);
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		len--;
		result[len] = absolute(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}

#include <stdio.h>
int main()
{
	int d;
	d = 143233;
	printf("%s\n", ft_itoa(d));
	return (0);
}

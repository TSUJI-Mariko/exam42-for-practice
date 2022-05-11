#include <stdlib.h>

int abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

int getlen(int nb)
{
	int i;
	i = 0;

	if (nb <= 0)
		i++;
	while (nb != 0)
	{
		nb = nb / 10;
		i++;
	}
	return (i);
}

char * ft_itoa(int nbr)
{
	int len;
	char *res;
	len = getlen(nbr);

	res = malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	res[len] = '\0';
	if (nbr < 0)
		res[0] = '-';
	if (nbr == 0)
		res[0] = '0';
	len--;
	while (len >= 0)
	{
		res[len] = abs(nbr % 10) + '0';
		nbr /= 10;
		len--;
	}
	return (res);
}

#include <stdio.h>
int main()
{
	int d;
	d = 12343467;
	printf("%s\n", ft_itoa(d));
	return (0);
}

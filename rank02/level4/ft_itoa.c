#include <stdlib.h>

int absolute_value(int nb)
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
	int len;
	char *result;
	len = getlen(nbr);

	result = malloc(sizeof(char) * len + 1);
	result[len] = '\0';
	if (nbr < 0)
		result[0] = '-';
	else if (nbr == 0)
		result[0] = '0';
	while (nbr != 0)
	{
		len--;
		result[len] = absolute_value(nbr % 10) + '0';
		nbr = nbr / 10;
	}
	return (result);
}

#include <stdio.h>
#include <limits.h>

int		main(void)
{
	int d = INT_MIN;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = -13;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 0;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = 5;
	printf("%d =? %s\n", d, ft_itoa(d));

	d = INT_MAX;
	printf("%d =? %s\n", d, ft_itoa(d));
}

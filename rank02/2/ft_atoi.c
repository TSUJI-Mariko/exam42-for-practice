#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int i;
	int res;
	int sign;

	sign = 1;
	i = 0;
	res = 0;
	while (str[i] == 't' || str[i] == '\n'|| str[i] == '\v' 
		|| str[i] == '\f' || str[i] == '\r'|| str[i] == ' ')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] != '\0' && str[i] >= '0' && str[i] <= '9')
	{
		res = res * 10 + str[i] - '0';
		i++;
	}
	return (res * sign);
}


int main ()
{
	printf("%d\n",ft_atoi("12345"));
	printf("%d\n",atoi("12345"));
	printf("%d\n", ft_atoi("+-+-+-+-+-+-+-   12345"));
	printf("%d\n", atoi("+-+-+-+-+-+-+-   12345"));
	printf("%d\n",ft_atoi("+-+-+-+-+-  +-+-12345"));
	printf("%d\n",atoi("+-+-+-+-+-+-  +-12345"));
	printf("%d\n",ft_atoi("+-+-+-+-+-+-+-!!12345"));
	printf("%d\n",atoi("+-+-+-+-+-+-+-!!12345"));
	printf("%d\n",ft_atoi("+-+-+-+-+-+-+-pp12345"));
	printf("%d\n",atoi("+-+-+-+-+-+-+-pp12345"));
	printf("%d\n",ft_atoi("q+-+-+-+-+-+-+-12345"));
	printf("%d\n",atoi("q+-+-+-+-+-+-+-12345"));
}

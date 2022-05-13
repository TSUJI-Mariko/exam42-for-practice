/*int		ft_atoi_base(const char *str, int str_base)
{
	int i;
	int n;
	int result;

	i = 0;
	n = 1;
	result = 0;

	if (str_base > 16 || str_base < 2)
		return (0);
	if (str[i] == '-')
	{
		n = -1;
		i++;
	}
	while (str[i] != '\0')
	{
		result *= str_base;
		if (str[i] >= '0' && str[i] <= '9')
			result += str[i] - 48;
		else if (str[i] >= 'A' && str[i] <= 'Z')
			result += str[i] - 55;
		else if (str[i] >= 'a' && str[i] <= 'z')
			result += str[i] - 87;
		i++;
	}
	return (result * n);
}
*/
static inline int 	valid_convert(char c, int base)
{
	char	*char_base = "0123456789abcdef";
	int		index = 0;

	while (index < base)
	{
		if (c == char_base[index])
			return (index);
		else if (index >= 10 && c == (char_base[index] - 32))
			return (index);
		index++;
	}
	return (-1);
}

int			ft_atoi_base(const char *str, int str_base)
{
	unsigned long long	num = 0;
	int					index = 0;
	int					sign = 1;

	if (str_base > 16 || str_base < 2)
		return (0);
	if (str[index] == '-')
	{
		sign = 0;
		index++;
	}
	while (valid_convert(str[index], str_base) != -1)
	{
		num = num * str_base + (valid_convert(str[index], str_base));
		if (num > 9223372036854775807)
		{
			if (sign)
				return (-1);
			else
				return (0);
		}
		index++;
	}
	return (int)((sign) ? (num) : (-num));
}


#include <stdio.h>

int main()
{
	printf("%d\n", ft_atoi_base("561390b80B", 4));
}

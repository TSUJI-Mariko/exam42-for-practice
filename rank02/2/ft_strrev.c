#include <stdio.h>

int ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

char    *ft_strrev(char *str)
{
	int i;
	int len;
	char temp;

	i = 0;
	len = ft_strlen(str) - 1;
	while(len > i)
	{
		temp = str[i];
		str[i] =  str[len];
		str[len] = temp;
		i++;
		len--;
	}
	return(str);
}

int main()
{
	char s[] = "BONJOUR MARIKO";
	
	ft_strrev(s);
	printf("%s\n", s);
	return(0);
}

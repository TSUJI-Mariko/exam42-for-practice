#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int ft_strlen(char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}


char    *ft_strdup(char *src)
{
	char *dest;
	int i;
	int len;

	len = ft_strlen(src);
	dest = (char *)malloc(sizeof(char) * len + 1);
	if (dest == NULL)
		return (NULL);
	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int main()
{
	char *c = "BONJOUR Mariko";

	printf("%s\n", strdup(c));
	printf("%s\n", ft_strdup(c));
	return (0);
}

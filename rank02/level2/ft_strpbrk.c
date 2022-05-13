#include <string.h>
#include <stdio.h>

int find(const char *s, char c)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char *ft_strpbrk(const char *s1, const char *s2)
{
	while (*s1)
	{
		if (find(s2, *s1) == 1)
			return ((char *)s1);
		++s1;
	}
	return (NULL);
}



int main()
{
	char *a = "abcdefghijklmnopqrstuvwxyz";
	char *b = "p";

	printf("%s\n", strpbrk(a, b));
	printf("%s\n", ft_strpbrk(a, b));
	return (0);
}

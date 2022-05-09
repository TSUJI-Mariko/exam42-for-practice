#include <stdio.h>
#include <string.h>

char *ft_strchr(const char *s, int c)
{
	while(*s != '\0')
	{
		if(*s == c)
			return ((char *)s);
		s++;
	}
	return (0);
}

size_t	ft_strspn(const char *s, const char *accept)
{
	size_t i;

	i = 0;
	while (s[i])
	{
		if (ft_strchr(accept, s[i]) == 0)
			break;
		++i;
	}
	return (i);
}


int main ()
{
	char a[] = "BONJOUR Mariko";
	char b[] = "BONJOUR ---";

	printf("%ld\n", ft_strspn(a, b));
	printf("%ld\n", strspn(a, b));
	char haystack[] = "This is a test string";
	char accept[] = "tgaThis";
	printf("%zu\n", ft_strspn(haystack, accept));
	printf("%zu\n", strspn(haystack, accept));
	return (0);
}

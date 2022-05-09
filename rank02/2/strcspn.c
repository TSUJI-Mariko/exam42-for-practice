#include <stdio.h>
#include <string.h>

size_t  ft_strcspn(const char   *s, const char  *reject)
{
	int i;
	int j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (reject[j] != '\0')
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

int main ()
{
	char *a = "pqrBONJOUR";
	char *b = " ";
	printf("%ld\n", strcspn(a,b));
	printf("%ld\n", ft_strcspn(a,b));
	return (0);
}

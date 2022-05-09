#include <stdio.h>
#include <string.h>
/*
int    ft_strcmp(char *s1, char *s2)
{
	int i;
	i = 0;
	while (s1[i] != '0' && s2[i] != '0' && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}*/

int     ft_strcmp(char  *s1, char   *s2)
{
    int     i;

    i = 0;
    while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
        i++;
    return(s1[i] - s2[i]);
}


int main ()
{
	char *a = "BonjourMariko";
	char *b = "Bonjour Mariko";
	char *c = "BonjourMariko";

	printf("%d\n", ft_strcmp(a,b));
	printf("%d\n", strcmp(a,b));
	printf("%d\n", ft_strcmp(a,c));
	printf("%d\n", strcmp(a,c));

	printf("%d\n", ft_strcmp(b,c));
	printf("%d\n", strcmp(b,c));

	printf("%d\n", ft_strcmp("Bon", "Bonj"));
	printf("%d\n", strcmp("Bon", "Bonj"));
	return (0);
}

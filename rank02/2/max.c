#include <stdio.h>//
#include <stdlib.h>//

int		max(int *tab, unsigned int len)
{
	int	max;
	int i;

	max = tab[len - 1];
	i = 0;
	while (i < len)
	{
		if(tab [i] > max)
			max = tab[i];
		i++;
	}
	return (max);

}

int		main(void)//
{//
	int	*tab;//

	if (!(tab = (int*)malloc(sizeof(int) * 3)))//
		return (0);//
	tab[0] = 7;//
	tab[1] = 6;//
	tab[2] = 80;//
	printf("%d", max(tab, 3));//
	return (0);//
}

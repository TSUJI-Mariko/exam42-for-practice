#include <stdlib.h>

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_rrange(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = end;
		end--;
		i++;
	}
	tab[i] = end;
	while (start > end)
	{
		tab[i] = end;
		end++;
		i++;
	}
	tab[i] = end;
	return (tab);
}


#include <stdio.h>
 
int      main(void)
{
	int start = 1;
	int end = 3;
 
	int *arr = ft_rrange(start, end);
 
	int i = 0;
	while (i < 1 + ft_abs(end - start))
	{
		printf("%d, ", arr[i]);
		++i;
	}  
	printf("\n");
}

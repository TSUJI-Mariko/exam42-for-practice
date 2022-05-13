#include <stdlib.h>
/* 
int     absolute_value(int n)
{
    if (n < 0)
        return (-n);
    return (n);
}
 
int     *ft_range(int start, int end)
{
    int number_of_ints;
    int *array;
    int step;
    int i;
 
    number_of_ints = 1 + absolute_value(end - start);
    array = malloc(sizeof(int) * number_of_ints);
 
    if (start < end)
        step = 1;
    else
        step = -1;
 
    i = 0;
    while (i < number_of_ints)
    {
        array[i] = start;
        start = start + step;
        ++i;
    }
    return (array);
}
 */

int		ft_abs(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}

int		*ft_range(int start, int end)
{
	int i;
	int *tab;

	i = 0;
	tab = (int*)malloc(sizeof(int) * ft_abs(start - end) + 1);
	while (start < end)
	{
		tab[i] = start;
		start++;
		i++;
	}
	tab[i] = start;
	while (start > end)
	{
		tab[i] = start;
		start--;
		i++;
	}
	tab[i] = start;
	return (tab);
}


#include <stdio.h>
 
int      main(void)
{
	int start = -1;
	int end = 2;
 
	int *arr = ft_range(start, end);
 
	int i = 0;
	while (i < 1 + ft_abs(end - start))
	{
		printf("%d, ", arr[i]);
		++i;
	}  
	printf("\n");
}

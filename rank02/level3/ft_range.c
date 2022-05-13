#include <stdlib.h>

int conversion(int nb)
{
	if (nb < 0)
		return (nb *= -1);
	else 
		return (nb);
}


int	*ft_range(int start, int end)
{
	int *res;
	int i;
	int size;

	size = (conversion(start - end));
	res = (int *)malloc(sizeof(int) * size + 1);
	if (res == NULL)
		return (NULL);
	i = 0;
	while (start < end)
	{
		res[i] = start;
		i++;
		start++;
	}
	res[i] = start;
	while (start > end)
	{
		res[i] = start;
		start--;
		i++;
	}
	res[i] = start;
	return (res);
}


#include <stdio.h>

int main()
{
	int	*lst;
	int	*head;

	lst = ft_range(3, 16);
	head = lst;
	while (*lst)
	{
		printf("%i\n", *lst);
		lst++;
	}
	free(head);
	return (0);
}

#include "list.h"

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int swapper;
	int swapped;
	t_list *cur;

	cur = lst;
	swapped = 1;
	while (swapped == 1)
	{
		while (cur != 0 && cur->next != 0)
		{
			swapped = 0;
			if (cmp(cur->data, cur->next->data) == 0)
			{
				swapper = cur->data;
				cur->data = cur->next->data;
				cur->next->data = swapper;
				swapped = 1;
			}
			cur = cur->next;
		}
		cur = lst;
	}
	return (lst);
}

int ascending(int a, int b)
{
	return (a <= b);
}

#include <stdio.h>
#include <stdlib.h>

int main()
{
	t_list *a = malloc(sizeof(t_list));
	t_list *b = malloc(sizeof(t_list));
	t_list *c = malloc(sizeof(t_list));

	a->data = 41;
	a->next = b;
	b->data = -11243;
	b->next = c;
	c->data = 2841847;
	c->next = 0;

	t_list *cur;
	cur = a;
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");

	cur = sort_list(a, ascending);
	while (cur)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
	return (0);
}

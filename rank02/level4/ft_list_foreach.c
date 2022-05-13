#include <stdlib.h>
#include "list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *cur;

	cur = begin_list;
	while (cur)
	{
		(*f)(cur->data);
		cur = cur->next;
	}
}

#include <stdio.h>

void	int_doubler(void *n)
{
	int *num = (int *)n;
	*num = *num * 4;
}

int		main(void)
{
	t_list *pt_a = malloc(sizeof(t_list));
	int	n_a = 0;
	pt_a->data = &n_a;
	pt_a->next = 0;

	t_list *pt_b = malloc(sizeof(t_list));
	int	n_b = 4;
	pt_b->data = &n_b;
	pt_b->next = 0;

	t_list *pt_c = malloc(sizeof(t_list));
	int	n_c = 3;
	pt_c->data = &n_c;
	pt_c->next = 0;

	pt_a->next = pt_b;
	pt_b->next = pt_c;

	t_list *cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");

	ft_list_foreach(pt_a, int_doubler);

	cur = pt_a;
	while (cur != 0)
	{
		printf("%d, ", *(int *)(cur->data));
		cur = cur->next;
	}
	printf("\n");
}

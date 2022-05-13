#include <stdio.h>

void sort_int_tab(int *tab, unsigned int size)
{
	unsigned int i;
	int swapped;
	int temp;

	swapped = 1;
	temp = 0;
	while (swapped == 1)
	{
		i = 1;
		swapped = 0;
		while (i < size)
		{
			if (tab[i - 1] > tab[i])
			{
				temp = tab[i];
				tab[i] = tab[i - 1];
				tab[i - 1] = temp;
				swapped = 1;
			}
			i++;
		}
	}
}


void print_array(int *tab, unsigned int size)
{
	unsigned int i = 0;
	while ( i < size)
	{
		printf("%d ", tab[i]);
		i++;
	}
	printf("\n");
}

int main()
{
	int i[] = {1, 4, 5, -1, -3};
	unsigned int j = 5;
	print_array(i, j);
	sort_int_tab(i, j);
	print_array(i, j);
	return (0);
}

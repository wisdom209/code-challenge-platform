#include <stdio.h>
/**
 * swap - entry
 * @a: number
 * @b: number
 *
 * Return: void
 */
void swap(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * ft_rev_int_tab - entry
 * @tab: array
 * @size: size of array
 *
 * return void;
 */
void ft_rev_int_tab(int *tab, int size)
{
	int i, j, k, half_size;

	half_size = size / 2;
	j = size - 1;

	for (i = 0; i <= half_size; i++)
		swap(&tab[i], &tab[j--]);
}

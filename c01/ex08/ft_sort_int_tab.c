/**
 * swap - swap numbers in array
 * @a: pointer to first num
 * @b: pointer to second num
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
 * ft_sort_int_tab - entry
 * @tab: array
 * @size: size of array
 *
 * Return: void
 */
void ft_sort_int_tab(int *tab, int size)
{
	int i, j;

	j = size;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (tab[i] < tab[j])
				swap(&tab[i], &tab[j]);
		}
	}
}

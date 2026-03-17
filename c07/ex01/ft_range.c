#include <stdlib.h>

/**
 * ft_range - create array of ints between min and max
 * @min: minimum number
 * @max: maximum number
 *
 * Return: Array of integers
 */
int *ft_range(int min, int max)
{
	int *range_array, i;

	if (min >= max)
		return (NULL);

	range_array = malloc(sizeof(int) * (max - min));

	if (!range_array)
		return (NULL);

	for (i = 0; i < (max - min); i++)
		range_array[i] = min + i;

	return (range_array);
}

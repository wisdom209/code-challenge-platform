#include <stdlib.h>

/**
 * ft_ultimate_range - Allocates and assigns an array of
 * ints containing all values between min and max.
 * Returns the size, or -1 on error, and sets range to NULL if min>=max.
 * @min: min int
 * @max: max int
 * @range: int array
 *
 * Return: int
 */
int ft_ultimate_range(int **range, int min, int max)
{
	int i, *int_array;

	if (max - min <= 0)
	{
		range = NULL;
		return (-1);
	}

	int_array = malloc(sizeof(int) * (max - min));

	for (i = 0; i < (max - min); i++)
		int_array[i] = min + i;

	*range = int_array;
	return (max - min);
}

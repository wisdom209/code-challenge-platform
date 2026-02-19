#include <unistd.h>
#include <stdio.h>

/**
 * ft_print_comb2 - entry
 *
 * Return: void
 */
void ft_print_comb2(void)
{
	int i, j;

	for (i = 0; i < 100; i++)
	{
		for (j = i + 1; j < 100; j++)
		{
			printf("%02d ", i);
			if (!((i == 98) && (j == 99)))
				printf("%02d,", j);
			else
				printf("%02d", j);
		}
	}
}

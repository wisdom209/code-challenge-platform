#include <unistd.h>
#include <stdio.h>

/**
 * num_to_string - prints string format of number
 * @num: number
 *
 * Return: void
 */
void num_to_string(int num)
{
	char index_one, index_two;

	index_one = (num / 10) + 48;
	index_two = (num % 10) + 48;

	write(1, &index_one, 1);
	write(1, &index_two, 1);
}

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
			num_to_string(i);
			write(1, " ", 1);
			if (!((i == 98) && (j == 99)))
			{
				num_to_string(j);
				write(1, ",", 1);
			}
			else
				num_to_string(j);
		}
	}
}

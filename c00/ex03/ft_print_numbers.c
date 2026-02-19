#include <unistd.h>

/**
 * ft_print_numbers - entry
 *
 * Return: void
 */
void ft_print_numbers(void)
{
	int i;

	for (i = 48; i < 58; i++)
		write(1, &i, 1);
}

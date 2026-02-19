#include <unistd.h>

/**
 * ft_print_reverse_alphabet - entry
 *
 * Return: void
 */
void ft_print_reverse_alphabet(void)
{
	int i;

	for (i = 'z'; i >= 'a'; i--)
		write(1, &i, 1);
}

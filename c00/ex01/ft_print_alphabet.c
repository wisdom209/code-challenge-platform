#include <unistd.h>

/**
 * ft_print_alphabet - entry
 *
 * Return: void
 */
void ft_print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		write(1, &i, 1);
}

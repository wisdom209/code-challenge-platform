#include <unistd.h>

/**
 * ft_putchar - print function
 * @c: character to print
 *
 * Return: void
 */
void ft_putchar(char c)
{
	write(1, &c, 1);
}

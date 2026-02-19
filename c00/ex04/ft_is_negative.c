#include <unistd.h>

/**
 * ft_is_negative - entry
 * @n: number
 *
 * Return: void
 */
void ft_is_negative(int n)
{
	char P, N;

	P = 'P';
	N = 'N';

	if (!n || n >= 0)
		write(1, &P, 1);
	else
		write(1, &N, 1);
}

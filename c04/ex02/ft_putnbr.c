#include <unistd.h>
#include <limits.h>

/**
 * ft_putnbr - writes a number to stdout
 * @nb: number
 *
 * Return: void
 */
void ft_putnbr(int nb)
{
	int buffer[20], i, j;
	char c;

	if (nb == INT_MIN)
	{
		write(1, "-2147483648", 12);
		return;
	}

	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb * -1;
	}

	if (nb == 0)
	{
		write(1, "0", 1);
		return;
	}

	for (i = 0; nb > 0; i++)
	{
		buffer[i] = nb % 10;
		nb = nb / 10;
	}

	for (j = i - 1; j >= 0; j--)
	{
		c = buffer[j] + '0';
		write(1, &c, 1);
	}
}

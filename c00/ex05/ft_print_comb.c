#include <unistd.h>

/**
 * ft_print_comb - entry
 *
 * Return: void
 */
void ft_print_comb(void)
{
	int x, y, z, c;

	c = ' ';
	for (x = '0'; x <= '9'; x++)
	{
		for (y = x + 1 ; y <= '9'; y++)
		{
			for (z = y + 1; z <= '9'; z++)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (!((x == '7') && (y == '8') && (z == '9')))
					write(1, &c, 1);
			}
		}
	}
}

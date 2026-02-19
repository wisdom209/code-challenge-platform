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
		for (y = '1'; y <= '8'; y++)
		{
			for (z = '2'; z <= '7'; z++)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (!((x == '9') && (y == '8') && (z == '7')))
					write(1, &c, 1);
			}
		}
	}
}

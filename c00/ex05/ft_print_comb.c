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
	for (x = '9'; x >= '0'; x--)
	{
		for (y = '8'; y >= '0'; y--)
		{
			for (z = '7'; z >= '0'; z--)
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (!(z == '0' & y == '0' & x == '0'))
					write(1, &c, 1);
			}
		}
	}
}

#include <unistd.h>

/**
 * ft_print_comb2 - entry
 *
 * Return: void
 */
void ft_print_comb2(void)
{
	char x, y, c, s;

	c = ',';
	s = ' ';

	for (x = '0'; x <= '9'; x++)
	{
		for (y = '0'; y <= '9'; y++)
		{
			write(1, &x, 1);
			write(1, &y, 1);
			if (!((x == '9') && (y == '9')))
			{
				write(1, &c, 1);
				write(1, &s, 1);
			}
		}
	}
}

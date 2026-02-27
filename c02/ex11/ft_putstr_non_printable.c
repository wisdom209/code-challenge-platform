#include "unistd.h"

/**
 * ft_putstr_non_printable - entry
 * @str: string
 *
 * Return: void
 */
void ft_putstr_non_printable(char *str)
{
	int i, first, second;
	char *letters;

	letters = "0123456789abcdef";
	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 32)
		{
			write(1, "\\x", 3);
			first = (int)str[i] / 16;
			second = (int)str[i] % 16;

			write(1, &letters[first], 1);
			write(1, &letters[second], 1);
		}
		else
			write(1, &str[i], 1);
	}
}

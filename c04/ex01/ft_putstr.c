#include <unistd.h>

/**
 * ft_putstr - print a string
 * @str: string
 *
 * Return: void
 */
void ft_putstr(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

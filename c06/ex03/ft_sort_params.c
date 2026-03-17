#include <unistd.h>
#include <stdio.h>

/**
 * ft_swap - swap strings
 * @a: string
 * @b: string
 *
 * Return: void
 */
void ft_swap(char **a, char **b)
{
	char *tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/**
 * ft_strcmp - compare strings
 * @a: string
 * @b: string
 *
 * Return: int
 */
int ft_strcmp(char *a, char *b)
{
	int i;

	i = 0;

	while (a[i] && b[i] && (a[i] == b[i]))
		i++;

	return (a[i] - b[i]);
}

/**
 * main - entry
 * @argc: arg count
 * @argv: arg number
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, j, buffer_len;
	char *buffer[1024], *str;

	if (argc < 2)
		return (0);

	for (i = 1; i < argc; i++)
		buffer[i - 1] = argv[i];

	buffer[i] = '\0';
	buffer_len = argc - 1;

	for (i = 0; i < buffer_len - 1; i++)
	{
		for (j = 0; j < buffer_len - 1; j++)
		{
			if (ft_strcmp(buffer[j], buffer[j + 1]) > 0)
				ft_swap(&buffer[j], &buffer[j + 1]);
		}
	}

	for (i = 0; i < argc - 1; i++)
	{
		str = buffer[i];
		for (j = 0; str[j] != '\0'; j++)
			write(1, &str[j], 1);
		write(1, "\n", 1);
	}

	return (0);
}

#include <unistd.h>

/**
 * main - entry
 * @argc: args count
 * @argv: args
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, j;
	char *c;

	for (i = argc; i > 1; i--)
	{
		c = argv[i - 1];
		for (j = 0; c[j] != '\0'; j++)
			write(1, &c[j], 1);
		write(1, "\n", 1);
	}
	return (0);
}

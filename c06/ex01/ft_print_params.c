#include <unistd.h>

/**
 * main - entry
 * @argc: count of command line arguments
 * @argv: command line args
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i, j;
	char *c;

	for (i = 1; i < argc; i++)
	{
		c = argv[i];
		for (j = 0; c[j] != '\0'; j++)
		{
			if (i > 0)
				write(1, &c[j], 1);
		}
		write(1, "\n", 1);
	}
	return (0);
}

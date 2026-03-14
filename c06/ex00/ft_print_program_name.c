#include <unistd.h>

/**
 * main - entry
 * @argc: number of arguments
 * @argv: argument array
 *
 * Return: int
 */
int main(int argc, char **argv)
{
	int i;
	char c;

	(void)argc;
	for (i = 0; argv[0][i] != '\0'; i++)
	{
		c = argv[0][i];
		write(1, &c, 1);
	}
	return (0);
}

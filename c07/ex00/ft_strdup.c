#include <stdlib.h>

/**
 * ft_strdup - duplicate string
 * @src: string
 *
 * Return: Pointer to string
 */
char *ft_strdup(char *src)
{
	int i;
	char *str;

	for (i = 0; src[i] != '\0'; i++)
		;

	str = malloc((i * sizeof(char)) + sizeof(char));

	if (!str)
		return (NULL);

	for (i = 0; src[i] != '\0'; i++)
		str[i] = src[i];
	str[i] = '\0';

	return (str);
}

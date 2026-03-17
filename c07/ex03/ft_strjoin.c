#include <stdlib.h>

/**
 * ft_strlen - string length
 * @str: str
 *
 * Return: int
 */
int ft_strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * ft_strjoin - Concatenates all strings in strs separated by sep.
 * If size is 0, returns a freeable string.
 *
 * @size: number of strings in strs
 * @strs: array of strings
 * @sep: delimiter
 *
 * Return: string
 */
char *ft_strjoin(int size, char **strs, char *sep)
{
	int i, j, k;
	char *new_str;

	new_str = malloc(1);

	if (!new_str)
		return (NULL);

	if (size == 0)
		return (new_str);
	j = 0;
	for (i = 0; i < size; i++)
		j += ft_strlen(strs[i]);

	new_str = malloc(sizeof(char) * 2 * j);
	if (!new_str)
		return (NULL);

	k = 0;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < ft_strlen(strs[i]); j++)
		{
			new_str[k] = strs[i][j];
			k++;
		}
		if (i != size - 1 && size > 1)
		{
			for (j = 0; j < ft_strlen(sep); j++)
			{
				new_str[k] = sep[j];
				k++;
			}
		}
	}
	new_str[k] = '\0';
	return (new_str);
}

/**
 * ft_strcat - entry
 * @dest: destination string
 * @src: source string
 *
 * Return: Pointer to destination string
 */
char *ft_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	j = 0;

	for (i = 0; dest[i] != '\0'; i++)
		;
	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}
	dest[i] = '\0';

	return (dest);
}

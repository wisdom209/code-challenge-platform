/**
 * ft_strcpy - man strcpy
 * @dest: string buffer
 * @src: string
 *
 * Return: string
 */
char *ft_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest[i] = src[i];

	return (dest);
}

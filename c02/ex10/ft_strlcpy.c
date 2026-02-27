/**
 * ft_strlen - string length
 * @str: string
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
 * ft_strlcpy - entry
 * @dest: string
 * @src: string
 * @size: number
 *
 * Return: number
 */
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int i, src_size;

	i = 0;
	src_size = ft_strlen(src);

	if (size == 0)
	{
		dest[0] = '\0';
		return (src_size);
	}

	for (i = 0; (i < size - 1 && i < src_size); i++)
		dest[i] = src[i];

	dest[i] = '\0';
	return (src_size);
}

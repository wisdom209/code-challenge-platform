/**
 * ft_strlen - man strlen
 * @str: string
 *
 * Return: int
 */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * ft_strncpy - man strncpy
 * @dest: string buffer
 * @src: string
 * @n: number
 *
 * Return: string
 */
char *ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int i, dest_initial_size, src_initial_size;

	dest_initial_size = ft_strlen(dest);
	src_initial_size = ft_strlen(src);

	if (src_initial_size < n)
	{
		/* copy then fill remaining buffer with '\0' */
		for (i = 0; src[i] != '\0' && i < dest_initial_size; i++)
			dest[i] = src[i];
		for (; i < dest_initial_size && i < n; i++)
			dest[i] = '\0';
	}
	if (src_initial_size >= n)
	{
		/* copy first n characters and stop*/
		for (i = 0; i < n && i < dest_initial_size; i++)
			dest[i] = src[i];
	}

	return (dest);
}

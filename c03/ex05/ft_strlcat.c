/**
 * ft_strlen - string length
 * @str: string to count
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
 * ft_strlcat - man strlcat
 * @dest: string
 * @src: string
 * @size: unsigned int
 *
 * Return: unsigned int
 */
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int dest_len, src_len, i, j, size_to_add;

	dest_len = ft_strlen(dest);
	src_len = ft_strlen(src);
	size_to_add = size - dest_len - 1;

	if (size <= dest_len)
		return (size + src_len);

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j < size_to_add)
		{
			dest[i] = src[j];
			i++;
		}
		else
			break;
	}

	dest[i] = '\0';

	return (dest_len + src_len);
}

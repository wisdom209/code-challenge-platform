/**
 * ft_strncat - entry
 * @dest: string
 * @src: string
 * @nb: number
 *
 * Return: pointer to dest
 */
char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int i, j;

	for (i = 0; dest[i] != '\0'; i++)
		;

	for (j = 0; src[j] != '\0'; j++)
	{
		if (j >= nb)
			break;
		dest[i] = src[j];
		i++;
	}

	dest[i] = '\0';

	return (dest);
}

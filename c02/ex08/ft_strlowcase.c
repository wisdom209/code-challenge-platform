/**
 * ft_strlowcase - entry
 * @str: string
 *
 * Return: string
 */
char *ft_strlowcase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] + 32;
	}
	return (str);
}

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
 * ft_strncmp - entry
 * @s1: string
 * @s2: string
 * @n: integer
 *
 * Return: integer
 */
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	i = 0;

	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}

	return (0);
}

/**
 * ft_strstr - finds string in a larger string
 * @str: string
 * @to_find: string to find
 *
 * Return: pointer to to_find
 */
char *ft_strstr(char *str, char *to_find)
{
	int to_find_len;

	to_find_len = ft_strlen(to_find);

	if (to_find[0] == '\0')
		return (str);

	while (1)
	{
		if (str[0] == '\0')
			break;

		if (ft_strncmp(str, to_find, to_find_len) == 0)
			return (str);

		str++;
	}

	return (0);
}

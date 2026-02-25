/**
 * ft_str_is_numeric - entry
 * @str: string
 *
 * Return: int
 */
int ft_str_is_numeric(char *str)
{
	int i;

	i = 0;

	if (str[i] == '\0')
		return (1);

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
	}
	return (1);
}

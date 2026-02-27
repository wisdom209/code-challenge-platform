/**
 * ft_str_is_printable - entry
 * @str: string
 *
 * Return: int
 */
int ft_str_is_printable(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] <= 32)
			return (0);
	}
	return (1);
}

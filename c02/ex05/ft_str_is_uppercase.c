/**
 * ft_str_is_uppercase - entry
 * @str: string
 *
 * Return: int
 */
int ft_str_is_uppercase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 'A' || str[i] > 'Z')
			return (0);
	}
	return (1);
}

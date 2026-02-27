/**
 * ft_str_is_lowercase - entry
 * @str: string
 *
 * Return: int
 */
int ft_str_is_lowercase(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
	}
	return (1);
}

/**
 * ft_strcapitalize - entry
 * @str: string
 *
 * Return: string
 */
char *ft_strcapitalize(char *str)
{
	int i;

	i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i > 0)
		{
			if ((str[i - 1] <= 32) && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] = str[i] - 32;
		}
		else
		{
			if (str[i] >= 'a' && str[i] <= 'z')
				str[i] = str[i] - 32;
		}
	}
	return (str);
}

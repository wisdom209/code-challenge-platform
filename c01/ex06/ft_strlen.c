/**
 * ft_strlen - entry
 * @str: string
 *
 * Return: int
 */
int ft_strlen(char *str)
{
	int i;

	while (str[i] != '\0')
		i++;
	return (i);
}

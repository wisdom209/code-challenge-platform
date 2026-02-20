/**
 * ft_strlen - entry
 * @str: string
 *
 * Return: int
 */
int ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

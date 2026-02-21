/**
 * ft_strcmp - entry
 * @s1: string
 * @s2: string
 *
 * Return: int
 */
int ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			return (0);
		if ((s1[i] - s2[i]) != 0)
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

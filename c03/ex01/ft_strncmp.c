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

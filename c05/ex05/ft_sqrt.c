/**
 * ft_sqrt - gets square root of a number
 * @nb: number
 *
 * Return: int
 */
int ft_sqrt(int nb)
{
	int half_nb, i;

	if (nb < 1)
		return (0);
	half_nb = nb / 2;

	for (i = 0; i < half_nb; i++)
	{
		if (i * i == nb)
			return (i);
	}
	return (0);
}

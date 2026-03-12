/**
 * ft_sqrt - gets square root of a number
 * @nb: number
 *
 * Return: int
 */
int ft_sqrt(int nb)
{
	long half_nb, i, newnb;

	newnb = (long)nb;
	if (newnb < 1)
		return (0);
	if (newnb == 1)
		return (1);
	half_nb = newnb / 2;

	for (i = 1; i <= half_nb; i++)
	{
		if (i * i == newnb)
			return (i);
	}
	return (0);
}

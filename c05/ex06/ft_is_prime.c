/**
 * ft_is_prime - confirm number is prime
 * @nb: number
 *
 * Return: int
 */
int ft_is_prime(int nb)
{
	long newnbr, i;

	newnbr = (long)nb;

	if (newnbr <= 1)
		return (0);

	for (i = 2; i * i <= newnbr; i++)
	{
		if (newnbr % i == 0)
			return (0);
	}
	return (1);
}

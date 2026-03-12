/**
 * isPrime - check primality
 * @nb: number
 *
 * Return: int
 */
int isPrime(int nb)
{
	int i;

	if (nb <= 1)
		return (0);

	for (i = 2; i * i <= nb; i++)
	{
		if (nb % i == 0)
			return (0);
	}
	return (1);
}

/**
 * ft_find_next_prime - find next prime number
 * @nb: number
 *
 * Return: int
 */
int ft_find_next_prime(int nb)
{
	int i;

	if (isPrime(nb) == 1)
		return (nb);

	i = nb;

	while (isPrime(i) == 0)
		i++;
	return (i);
}

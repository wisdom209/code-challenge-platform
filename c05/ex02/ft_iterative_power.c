/**
 * ft_iterative_power - entry
 * @nb: number
 * @power: power
 *
 * Return: int
 */
int ft_iterative_power(int nb, int power)
{
	int i, result;

	result = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);

	for (i = 0; i < power; i++)
		result = nb * result;

	return (result);
}

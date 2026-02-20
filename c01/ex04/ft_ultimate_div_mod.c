
/**
 * ft_ultimate_div_mod - entry
 * @a: number
 * @b: number
 *
 * Return: void
 */
void ft_ultimate_div_mod(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp % *b;
}

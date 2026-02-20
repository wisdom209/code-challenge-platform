/**
 * ft_div_mod - entry
 * @a: number
 * @b: number
 * @div: number
 * @mod: number
 *
 * Return: void
 */
void ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a & b;
}

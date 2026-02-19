/**
 * ft_swap - swap numbers
 *
 * @a: pointer to first number
 * @b: pointer to second number
 *
 * Return: 0
 */
void ft_swap(int *a, int *b)
{
	int *tmp;

	tmp = *b;
	b = *a;
	a = *tmp;
}

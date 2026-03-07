#include <limits.h>

/**
 * ft_pow - power math
 * @a: number
 * @b: number
 *
 * Return: number
 */
int ft_pow(int a, int b)
{
	int i, exp;

	exp = 1;

	if (b == 0)
		return (1);

	for (i = 0; i < b; i++)
		exp = exp * a;

	return (exp);
}

/**
 * createNumber - number from buffer
 * @size: number
 * @buffer: array of characters
 *
 * Return: int
 */
int createNumber(char *buffer, int size)
{
	int i, sum;

	i = 0;
	sum = 0;

	for (i = 0; i < size; i++)
		sum = (ft_pow(10, i) * (buffer[size - i - 1] - '0')) + sum;

	return (sum);
}

/**
 * ft_atoi - entry
 * @str: string
 *
 * Return: int
 */
int ft_atoi(char *str)
{
	char buffer[1024];
	int i, j, k, isNeg;

	i = 0;
	j = 0;
	k = 0;
	isNeg = 1;

	for (i = 0; str[i] < '0' || str[i] > '9'; i++)
	{
		if (str[i] == '-')
			isNeg = -1;
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == '-' || str[i] == '+')
		{
			if (str[i + 1] != '-' && str[i + 1] != '+' &&
				(str[i + 1] < '0' || str[i + 1] > '9'))
				return (0);
		}
		if (str[i] == '0' && (str[i + 1] < '0' || str[i + 1] > '9'))
			return (0);

		if (str[i] >= '0' && str[i] <= '9')
		{
			for (j = i; str[j] > '0' && str[j] <= '9'; j++)
			{
				buffer[k] = str[j];
				k++;
			}
			break;
		}
	}

	i = createNumber(buffer, k) * isNeg;
	return (i);
}

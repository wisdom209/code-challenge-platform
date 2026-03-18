#include <stdlib.h>
/**
 * base_is_valid - check if base is valid
 *
 * @str: base string
 *
 * Return: long
 */
long base_is_valid(char *str)
{
	long i, j, str_len;

	for (str_len = 0; str[str_len] != '\0'; str_len++)
		;

	if (str_len <= 1)
		return (0);

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] <= 32) || (str[i] == '-') || (str[i] == '+'))
			return (0);
		if (str[i + 1] == '\0')
			break;
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] - str[j] == 0)
				return (0);
		}
	}
	return (1);
}

/**
 * get_index - get index of char in str
 * @c: char
 * @str: str
 *
 * Return: long
 */
long get_index(char c, char *str)
{
	long i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == c)
			return (i);
	}
	return (-1);
}

/**
 * ft_atoi - convert nbr to base 10  long number
 * @nbr: number string
 * @base_from: base from
 *
 * Return: long
 */
long ft_atoi(char *nbr, char *base_from)
{
	long result, sign, index, base_len;

	sign = 1;
	result = 0;
	for (base_len = 0; base_from[base_len] != '\0'; base_len++)
		;

	while (*nbr <= 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	while (*nbr)
	{
		index = get_index(*nbr, base_from);
		if (index == -1)
			break;
		result = (result * base_len) + index;
		nbr++;
	}
	return (result * sign);
}

/**
 * ft_tobase - convert nbr to base base_to
 * @nbr: number
 * @base_to: base to convert to
 * @isNeg: should number be negative
 *
 * Return: base string
 */
char *ft_tobase(long nbr, char *base_to, long isNeg)
{
	long base_len, i, tmp, new_nbr;
	char *buffer;

	new_nbr = (long)nbr;
	for (base_len = 0; base_to[base_len] != '\0'; base_len++)
		;
	if (!nbr)
		return (NULL);
	i = 0;
	tmp = (long)nbr;
	while (tmp > 0)
	{
		tmp = tmp / base_len;
		i++;
	}
	if (isNeg == 1)
		buffer = malloc(sizeof(char) * i + sizeof(char) * 2);
	else
		buffer = malloc(sizeof(char) * i + sizeof(char) * 1);
	if (!buffer)
		return (NULL);

	i = i + isNeg;
	buffer[i] = '\0';

	while (new_nbr > 0)
	{
		buffer[i - 1] = base_to[new_nbr % base_len];
		new_nbr = new_nbr / base_len;
		i--;
	}
	if (isNeg == 1)
		buffer[i - 1] = '-';
	return (buffer);
}

/**
 * ft_convert_base - convert across bases
 * @nbr: number
 * @base_from: string
 * @base_to: string
 *
 * Return: string
 */
char *ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long decimal, isNeg;
	char *base_convert;

	isNeg = 0;

	if (base_is_valid(base_from) == 0 || base_is_valid(base_to) == 0)
		return (NULL);

	decimal = ft_atoi(nbr, base_from);
	if (decimal < 0)
	{
		decimal *= -1;
		isNeg = 1;
	}
	if (decimal == 0)
	{
		base_convert = malloc(sizeof(char) * 2);
		base_convert[0] = base_to[0];
		base_convert[1] = '\0';
		return (base_convert);
	}
	base_convert = ft_tobase(decimal, base_to, isNeg);
	return (base_convert);
}

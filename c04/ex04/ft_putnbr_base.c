#include <unistd.h>
#include <stdio.h>

/**
 * ft_check_dup - check duplicates in string
 * @str: string
 *
 * Return: int
 */
int ft_check_dup(char *str)
{
	int i, j;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i + 1] == '\0')
			break;
		for (j = i + 1; str[j] != '\0'; j++)
		{
			if (str[i] == str[j])
				return (1);
		}
	}
	return (0);
}

/**
 * ft_strlen - string length
 * @str: string
 *
 * Return: long
 */
long ft_strlen(char *str)
{
	long i;

	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}

/**
 * ft_putnbr_base - entry
 * @nbr: number
 * @base: string
 *
 * Return: void
 */
void ft_putnbr_base(int nbr, char *base)
{
	long base_len, i, newnbr, isNeg;
	char buffer[1024];

	isNeg = 0;
	newnbr = (long)nbr;
	if (newnbr < 0)
	{
		isNeg = 1;
		newnbr *= -1;
	}

	base_len = ft_strlen(base);
	if (base_len <= 1 || ft_check_dup(base) == 1)
		return;
	for (i = 0; base[i] != '\0'; i++)
	{
		if (base[i] == '+' || base[i] == '-')
			return;
	}
	i = 0;
	if (newnbr == 0)
	{
		write(1, "0", 1);
		return;
	}
	while (newnbr > 0)
	{
		buffer[i] = base[newnbr % base_len];
		newnbr = newnbr / base_len;
		i++;
	}
	if (isNeg == 1)
		write(1, "-", 1);
	for (; i > 0; i--)
		write(1, &buffer[i - 1], 1);
}

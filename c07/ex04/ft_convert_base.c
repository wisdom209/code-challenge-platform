/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 14:44:48 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/28 19:47:05 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * get_base_len - finds the length of base if valid
 * @base: base string
 *
 * Return: base_length if valid, else -1
 */
long	get_base_len(char *base)
{
	long	base_len;
	long	i;

	base_len = 0;
	i = 0;
	while (base[base_len])
	{
		if (base[base_len] == '+' || base[base_len] == '-')
			return (-1);
		if (base[base_len] <= 32 || base[base_len] == 127)
			return (-1);
		i = base_len + 1;
		while (base[i])
		{
			if (base[base_len] == base[i])
				return (-1);
			i++;
		}
		base_len++;
	}
	if (base_len <= 1)
		return (-1);
	return (base_len);
}

/**
 * ft_str_contains_char - check if char is in string
 * @c: char
 * @str: string
 *
 * Return: index of char else -1;
 */
long	ft_str_contains_char(char c, char *str)
{
	long	i;

	i = 0;
	while (str[i])
	{
		if (str[i] == c)
			return (i);
		i++;
	}
	return (-1);
}

/**
 * ft_atoi - converts ascii to integer
 * @nbr: number in ascii
 * @base: base of number
 *
 * Return: valid integer
 */
int	ft_atoi(char *nbr, char *base)
{
	long	result;
	long	sign;
	long	char_index;

	sign = 1;
	while (*nbr <= 32)
		nbr++;
	while (*nbr == '-' || *nbr == '+')
	{
		if (*nbr == '-')
			sign *= -1;
		nbr++;
	}
	result = 0;
	while (*nbr)
	{
		char_index = ft_str_contains_char(*nbr, base);
		if (char_index < 0)
			break ;
		result = (result * get_base_len(base)) + char_index;
		nbr++;
	}
	return ((int)(result * sign));
}

/**
 * ft_itoa - converts integer to ascii
 * @nbr: integer
 * @base_to: base to convert it to
 * @is_neg: 1 if integer is negative else 0
 *
 * Return: base representation of nbr in base_to
 */
char	*ft_itoa(long nbr, char *base_to, long is_neg)
{
	char	buffer[1024];
	char	*int_repr;
	long	i;

	i = 0;
	if (nbr == 0)
		buffer[i++] = base_to[0];
	while (nbr > 0)
	{
		buffer[i++] = base_to[nbr % get_base_len(base_to)];
		nbr /= get_base_len(base_to);
		if (nbr <= 0 && is_neg == 1)
			buffer[i++] = '-';
	}
	int_repr = malloc(sizeof(char) * (i));
	if (!int_repr)
		return (NULL);
	int_repr[i--] = '\0';
	nbr = 0;
	while (i >= 0)
		int_repr[nbr++] = buffer[i--];
	return (int_repr);
}

/**
 * ft_convert_base - Converts nbr from base_from to base_to
 * @nbr: number
 * @base_from: source number base
 * @base_to: destination number base_to
 *
 * Return: nbr in base_to else NULL if base is invalid
 */
char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	long	nbr_to_int;
	char	*base_conversion;
	long	is_neg;

	if (get_base_len(base_from) < 0 || get_base_len(base_to) < 0)
		return (NULL);
	nbr_to_int = ft_atoi(nbr, base_from);
	is_neg = 0;
	if (nbr_to_int < 0)
	{
		nbr_to_int *= -1;
		is_neg = 1;
	}
	base_conversion = ft_itoa(nbr_to_int, base_to, is_neg);
	return (base_conversion);
}

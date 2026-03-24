/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 17:14:51 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 18:48:44 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_strlen - Reproduces strlen
 * @str: string to count
 *
 * Return: int
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * is_valid_base - check base validity
 * base must not be empty
 * must not be size 1
 * must not have duplicate characters
 * must not contain '+' or '-'
 *
 * @base: string of characters
 *
 * Return: 1 if valid base else 0
 */
int	is_valid_base(char *base)
{
	int	base_len;
	int	i;
	int	j;

	base_len = ft_strlen(base);
	if (base_len <= 1)
		return (0);
	i = 0;
	while (i < base_len)
	{
		if (base[i] == '+' || base[i] == '-')
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (base[i] == base[j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

/**
 * ft_write_nbr - writes number in buffer
 * @end_index: index of last digit in buffer
 * @buffer: array of ascii digits
 * @is_neg: is the number negative
 * @nbr: the number
 *
 * Return: void
 */
void	ft_write_nbr(char *buffer, long end_index, long is_neg, int nbr)
{
	if (nbr == 0)
	{
		write(1, "0", 1);
		return ;
	}
	if (is_neg == 1)
		write(1, "-", 1);
	while (--end_index >= 0)
		write(1, &buffer[end_index], 1);
}

/**
 * ft_putnbr_base - Display a number in base system
 * @nbr: number
 * @base: base
 *
 * Return: void
 */
void	ft_putnbr_base(int nbr, char *base)
{
	long	is_neg;
	long	long_nbr;
	long	i;
	char	buffer[1024];

	long_nbr = (long)nbr;
	is_neg = 0;
	if (long_nbr < 0)
	{
		is_neg = 1;
		long_nbr *= -1;
	}
	if (is_valid_base(base) == 0)
		return ;
	i = 0;
	while (long_nbr > 0)
	{
		buffer[i] = base[long_nbr % ft_strlen(base)];
		long_nbr /= ft_strlen(base);
		i++;
	}
	ft_write_nbr(buffer, i, is_neg, nbr);
}

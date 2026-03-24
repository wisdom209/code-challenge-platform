/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 16:54:14 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 17:12:09 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_atoi - convert string to int
 * @str: string of characters to convert
 *
 * Return: int
 */
int	ft_atoi(char *str)
{
	int	is_neg;
	int	nbr;

	is_neg = 1;
	nbr = 0;
	while (*str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			is_neg *= -1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		nbr = (nbr * 10) + (*str - '0');
		str++;
	}
	return (nbr * is_neg);
}

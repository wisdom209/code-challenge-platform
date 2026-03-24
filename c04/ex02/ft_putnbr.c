/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:12:28 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 15:19:46 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/**
 * @ft_putnbr - Display a number
 * @nb: number
 *
 * Return: void
 */
void	ft_putnbr(int nb)
{
	long	full_nbr;
	long	i;
	long	buffer[1024];
	char	c;

	full_nbr = (long)nb;
	if (nb < 0)
		full_nbr = (long)nb * -1;
	if (full_nbr == 0)
		write(1, "0", 1);
	i = 0;
	while (full_nbr > 0)
	{
		buffer[i] = full_nbr % 10;
		full_nbr /= 10;
		i++;
	}
	if (nb < 0)
		write(1, "-", 1);
	while (i > 0)
	{
		c = buffer[i - 1] + '0';
		write(1, &c, 1);
		i--;
	}
}

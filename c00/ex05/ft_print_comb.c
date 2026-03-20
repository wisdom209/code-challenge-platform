/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:41:12 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/20 22:58:57 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_print_comb - Display all different combinations of
 * three different digits in ascending order
 *
 * Return: void
 */
void	ft_print_comb(void)
{
	char	x;
	char	y;
	char	z;

	x = '0';
	while (x <= '9')
	{
		y = x + 1;
		while (y <= '9')
		{
			z = y + 1;
			while (z <= '9')
			{
				write(1, &x, 1);
				write(1, &y, 1);
				write(1, &z, 1);
				if (x == '7' && y == '8' && z == '9')
					break ;
				write(1, ", ", 2);
				z++;
			}
			y++;
		}
		x++;
	}
}

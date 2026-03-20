/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 23:54:48 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 00:07:50 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * write_number - write a number using ascii chars
 * @nbr: number
 *
 * Return: void
 */
void	write_number(int nbr)
{
	char	first_num;
	char	second_num;

	first_num = (nbr / 10) + '0';
	second_num = (nbr % 10) + '0';
	write(1, &first_num, 1);
	write(1, &second_num, 1);
}

/**
 * ft_print_comb2 - Display all different combinations of two two-digit numbers
 * between 00 and 99.
 *
 * Return: void
 */
void	ft_print_comb2(void)
{
	int	i;
	int	j;

	i = 0;
	while (i < 100)
	{
		j = i + 1;
		while (j < 100)
		{
			write_number(i);
			write(1, " ", 1);
			write_number(j);
			if (i == 98 && j == 99)
				break ;
			write(1, ", ", 2);
			j++;
		}
		i++;
	}
}

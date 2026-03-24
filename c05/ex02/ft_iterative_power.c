/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 20:45:30 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 20:52:04 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_iterative_power - iterated function that returns the
 * value of a power applied to a number.
 * A power lower than 0 returns 0
 *
 * @nb: number
 * @power: power to raise number to
 *
 * Return: integer
 */
int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}

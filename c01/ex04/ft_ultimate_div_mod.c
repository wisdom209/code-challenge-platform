/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 00:28:51 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 00:32:52 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_ultimate_div_mod - Divides *a by *b,
 * stores the quotient in *a and the remainder in *b.
 *
 * @a: integer
 * @b: integer
 *
 * Return: void
 */
void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *a / *b;
	*b = tmp / *b;
}

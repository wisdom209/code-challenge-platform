/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 00:24:55 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 00:27:56 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_div_mod - Divides a by b and stores
 * the quotient in the int pointed by div,
 * and the remainder in the int pointed by mod.
 * @a: integer
 * @b: integer
 * @div: int pointer
 * @mod: int pointer
 *
 * Return: void
 */
void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

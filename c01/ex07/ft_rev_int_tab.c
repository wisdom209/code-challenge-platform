/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 00:44:11 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 00:53:32 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_rev_int_tab - Reverses a given array of integers
 * @tab: array of integers
 * @size: size of array
 *
 * Return: void
 */
void	ft_rev_int_tab(int *tab, int size)
{
	int	half_tab_size;
	int	i;
	int	tmp;

	i = 0;
	half_tab_size = size / 2;
	while (i <= half_tab_size)
	{
		tmp = tab[i];
		tab[i] = tab[size - i - 1];
		tab[size - i - 1] = tmp;
		i++;
	}
}

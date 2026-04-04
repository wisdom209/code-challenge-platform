/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 14:25:41 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/04 14:26:28 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/**
 * ft_putchar - display a character
 * @c: character
 *
 * Return: void
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

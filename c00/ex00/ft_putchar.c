/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 20:56:05 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/20 20:59:55 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_putchar - function that displays the
 * character passed as a parameter
 *
 * @c: character
 *
 * Return: void
 */
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

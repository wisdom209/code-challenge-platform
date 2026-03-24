/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:01:29 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 14:03:17 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/**
 * ft_putstr - Displays a string
 * @str: String of characters
 *
 * Return: void
 */
void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, &str, 1);
		str++;
	}
}

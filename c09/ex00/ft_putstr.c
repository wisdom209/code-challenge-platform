/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 14:29:00 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/04 14:30:33 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
/**
 * ft_putstr - display a string
 * @str: string
 *
 * Return: void
 */
void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

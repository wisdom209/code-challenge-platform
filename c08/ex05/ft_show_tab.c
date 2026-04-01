/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 05:26:05 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/01 05:43:56 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_stock_str.h"

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

/**
 * ft_putnbr - writes a number
 * @nbr: number
 *
 * Return: int
 */
void	ft_putnbr(int nbr)
{
	int		i;
	char	c;
	char	buffer[1024];

	i = 0;
	while (nbr > 0)
	{
		buffer[i] = nbr % 10;
		nbr /= 10;
		i++;
	}
	i--;
	while (i >= 0)
	{
		c = buffer[i] + '0';
		write(1, &c, 1);
		i--;
	}
}

/**
 * ft_show_tab - print content of array
 * @par: array container
 *
 * Return: void
 */
void	ft_show_tab(struct s_stock_str *par)
{
	int	i;

	i = 0;
	while (par[i].str)
	{
		ft_putstr(par[i].str);
		write(1, "\n", 1);
		ft_putnbr(par[i].size);
		write(1, "\n", 1);
		ft_putstr(par[i].copy);
		write(1, "\n", 1);
		i++;
	}
}

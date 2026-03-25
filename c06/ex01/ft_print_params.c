/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 04:52:15 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/25 05:07:32 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_putstr - display a string
 *
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
 * main - displays given command line arguments
 * @argc: number of command line arguments
 * @argv: array of arguments
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	(void)argc;
	argv++;
	while (*argv)
	{
		ft_putstr(*argv);
		ft_putstr("\n");
		argv++;
	}
	return (0);
}

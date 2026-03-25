/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 05:10:26 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/25 05:19:50 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
/**
 * ft_putstr - display string
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
 * main - Display command line arguments
 * in reverse, one per line
 *
 * @argc: command line arguments count
 * @argv: argument array
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	int	i;

	argv++;
	i = argc - 2;
	while (i >= 0)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
		i--;
	}
	return (0);
}

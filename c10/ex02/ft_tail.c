/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 06:00:16 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/14 19:32:12 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include "ft_tail.h"

#define ERROR_1 "ft_tail: option requires an argument -- 'c'\nTry"
#define ERROR_2 "'tail --help' for more information.\n"

/**
 * main - Reproduce behaviour of tail -c (man tail)
 * @argc: cli argument count
 * @argv: cli arguments
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	int		nb_print;
	int		i;

	i = 0;
	if (argc == 2 && !argv[1][2])
		return (ft_putstr(ERROR_1, 2, 0), ft_putstr(ERROR_2, 2, 0), 1);
	if (argv[1] && argv[1][2])
	{
		argv[1] = argv[1] + 2;
		nb_print = ft_getnb(argv[1], &i);
		if (i == 1)
			return (nb_print == 1);
		return (argv += 2, ft_tail_bytes(nb_print, argv, 0));
	}
	else
	{
		nb_print = ft_getnb(argv[2], &i);
		if (i == 1)
			return (nb_print == 1);
		return (argv += 3, ft_tail_bytes(nb_print, argv, 0));
	}
	return (0);
}

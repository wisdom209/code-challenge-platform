/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 05:22:37 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/25 05:46:54 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_strcmp - Reproduce behavior of strcmp (man strcmp)
 * @str1: string
 * @str2: string
 *
 * Return: int
 */
int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] && str2[i] && str1[i] == str2[i])
		i++;
	return (str1[i] - str2[i]);
}

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
	write(1, "\n", 1);
}

/**
 * main - display cli arguments in reverse
 * one per line
 *
 * @argc: argument count
 * @argv: arguments array
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	char	*tmp;
	int		i;
	int		j;

	argv++;
	argc--;
	i = 0;
	while (i < argc)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
			{
				tmp = argv[i];
				argv[i] = argv[j];
				argv[j] = tmp;
			}
			j++;
		}
		i++;
	}
	while (*argv)
		ft_putstr(*argv++);
	return (0);
}

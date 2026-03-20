/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 22:13:39 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/20 22:20:56 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_print_alphabet - Display the alphabet in lowercase,
 * in ascending order, starting from 'a'.
 *
 * Return: void
 */
void	ft_print_alphabet(void)
{
	char	alphabet_a;

	alphabet_a = 'a';
	while (alphabet_a <= 'z')
	{
		write(1, &alphabet_a, 1);
		alphabet_a++;
	}
}

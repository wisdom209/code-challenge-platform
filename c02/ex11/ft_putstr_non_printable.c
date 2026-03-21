/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 13:11:57 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 13:32:06 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/**
 * ft_putstr_non_printable - Displays a string,
 * replacing non‑printable characters
 * by \xhh (hexadecimal, lowercase).
 * Note that space is asssumed printable
 *
 * @str: string of characters
 *
 * Return: void
 */
void	ft_putstr_non_printable(char *str)
{
	int		i;
	char	first_index;
	char	second_index;
	char	*hexadecimal_chars;

	i = 0;
	hexadecimal_chars = "0123456789abcdef";
	while (str[i])
	{
		if (str[i] < 32 || str[i] == 127)
		{
			first_index = hexadecimal_chars[str[i] / 16];
			second_index = hexadecimal_chars[str[i] % 16];
			write(1, "\\x", 2);
			write(1, &first_index, 1);
			write(1, &second_index, 1);
		}
		else
			write(1, &str[i], 1);
		i++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 07:05:29 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 07:09:05 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_str_is_lowercase - Returns 1 if the string contains
 * only lowercase alphabetical characters, else 0
 * Empty string returns 1
 *
 * @str: string of characters
 *
 * Return: integer
 */
int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
			return (0);
		i++;
	}
	return (1);
}

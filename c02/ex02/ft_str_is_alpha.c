/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 01:37:26 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 01:45:26 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_str_is_alpha - returns 1 if the string contains only
 * alphabetical characters
 * else 0. Empty string returns 1.
 *
 * @str: string of characters
 *
 * Return: int
 */
int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[0] == '\0')
		return (1);
	while (str[i])
	{
		if (str[i] < 'a' || str[i] > 'z')
		{
			if (str[i] < 'A' || str[i] > 'Z')
				return (0);
		}
		i++;
	}
	return (1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 10:28:45 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 10:33:35 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strlowcase - Transforms every letter to lowercase.
 * @str: string of characters
 *
 * Return: string
 */
char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}

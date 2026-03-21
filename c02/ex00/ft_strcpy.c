/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 01:14:54 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 01:19:37 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strcpy - Reproduce the behavior of
 * strcpy (man strcpy)
 *
 * @dest: destination string
 * @src: source string
 *
 * Return: void
 */
char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

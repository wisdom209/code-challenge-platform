/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 07:54:57 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/22 08:15:28 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strlcat - Reproduce the behavior of strlcat
 * Considers the destination buffer and stops
 * appending when a null terminator is reached.
 * ie. in strlcat, destination buffer must be null
 * terminated and greater than or equal to size to
 * append. Size must be greater than or equal to
 * the destination length or 0 is returned.
 *
 * @dest: destination string
 * @src: source string
 * @size: limit of characters to append
 *
 * Return: dest length + src length
 */
unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	src_len;
	unsigned int	dest_len;

	src_len = 0;
	dest_len = 0;
	while (src[src_len])
		src_len++;
	while (dest[dest_len])
		dest_len++;
	i = 0;
	j = dest_len;
	if (size <= dest_len)
		return (dest_len + src_len);
	while (src[i] && j < size - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dest_len + src_len);
}

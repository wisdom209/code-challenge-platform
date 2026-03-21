/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 12:37:29 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 12:50:27 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_strlcpy - Reproduce the behavior of strlcpy (man strlcpy).
 *  The strlcpy() function copies up to
 *  size - 1 characters
 *  from the NULL-terminated string src to dst
 *  NULL-terminating the result.
 *
 *  @dest: destination string
 *  @src: source string
 *  @size: length of string plus null byte to create
 *
 *  Return: int (src length)
 */
int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	src_len = 0;
	while (src[src_len])
		src_len++;
	i = 0;
	while (i < size - 1 && src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}

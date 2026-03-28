/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 05:58:20 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/28 12:37:35 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

/**
 * ft_strdup - Reproduce the behavior of strdup (man strdup)
 * @src: source string
 *
 * Return: string
 */
char	*ft_strdup(char *src)
{
	int		i;
	int		src_len;
	char	*dup_str;

	src_len = 0;
	while (src[src_len])
		src_len++;
	dup_str = malloc(sizeof(char) * src_len + 1);
	if (dup_str == NULL)
		return (NULL);
	i = 0;
	while (i < src_len)
	{
		dup_str[i] = src[i];
		i++;
	}
	return (dup_str);
}

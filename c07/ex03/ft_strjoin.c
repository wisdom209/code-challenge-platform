/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 13:26:51 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/28 14:35:49 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
/**
 * ft_calc_buffsize - calculate buffer size
 * @size: size of array of strings
 * @str_array: array of strings
 * @sep: separator string
 *
 * Return: int
 */
int	ft_calc_buffsize(int size, char *sep, char **str_array)
{
	int	sep_size;
	int	i;
	int	j;
	int	strings_size;

	sep_size = 0;
	while (sep[sep_size])
		sep_size++;
	strings_size = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (str_array[i][j])
		{
			strings_size += 1;
			j++;
		}
		i++;
	}
	return (strings_size + (sep_size * (size - 1)) + 1);
}

/**
 * ft_append_str - append a string to buffer
 * @str: string to append
 * @offset: where to start appending to buffer
 * @buffer: string buffer
 *
 * Return: new_offset
 */
int	ft_append_str(char *str, char **buffer, int offset)
{
	int	i;

	i = 0;
	while (str[i])
	{
		(*buffer)[offset] = str[i];
		offset++;
		i++;
	}
	return (offset);
}

/**
 * ft_strjoin - Concatenates all strings in strs separated
 * by a delimiter called sep
 *
 * @size: size of string array
 * @strs: string array to concatenate
 * @sep: separator string
 *
 * Return: concatenated string
 */
char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*buffer;
	int		buffer_size;
	int		sep_size;
	int		i;
	int		j;

	if (size <= 0)
		return ("");
	i = 0;
	j = 0;
	sep_size = size - 1;
	buffer_size = ft_calc_buffsize(size, sep, strs);
	buffer = malloc(buffer_size);
	if (!buffer)
		return (NULL);
	while (j < size && i < buffer_size)
	{
		i = ft_append_str(strs[j], &buffer, i);
		if (sep_size > 0)
			i = ft_append_str(sep, &buffer, i);
		sep_size--;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}

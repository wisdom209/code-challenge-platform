/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 20:10:43 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/28 22:18:13 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

/**
 * ft_str_contains_char - confirm a charactere is part
 * of a string
 *
 * @c: character
 * @str: string
 *
 * Return: index of char else -1
 */
int	ft_str_contains_char(char c, char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (c == str[i])
			return (i);
		i++;
	}
	return (-1);
}

/**
 * ft_get_arr_count - get string array count
 * @str: string
 * @charset: separators
 *
 * Return: int
 */
int	ft_get_arr_count(char *str, char *charset)
{
	int	count;
	int	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] && ft_str_contains_char(str[i], charset) >= 0)
			i++;
		if (str[i] && ft_str_contains_char(str[i], charset) < 0)
			count++;
		while (str[i] && ft_str_contains_char(str[i], charset) < 0)
			i++;
	}
	return (count);
}

/**
 * ft_append_strings - append strings to 2D array container
 * @str: string with separators
 * @charset: set of delimiters
 * @index: current address of iteration
 * @result: container for separated strings
 *
 * Return: int (current iteration index)
 */
int	ft_append_strings(char *str, char *charset, int *index, char **result)
{
	char	buffer[1024];
	int		j;
	int		i;
	char	*str_to_add;

	i = *index;
	j = 0;
	while (str[i] && ft_str_contains_char(str[i], charset) < 0)
		buffer[j++] = str[i++];
	buffer[j] = '\0';
	str_to_add = malloc(sizeof(char *) * j);
	if (!str_to_add)
		return (-1);
	j = 0;
	while (buffer[j] != '\0')
	{
		str_to_add[j] = buffer[j];
		j++;
	}
	str_to_add[j] = '\0';
	*result = str_to_add;
	return (i);
}

/**
 * ft_split - splits string into array of strings
 * using an array of delimiters
 *
 * @str: string to split
 * @charset: array of delimiters
 *
 * Return: array of separated strings
 */
char	**ft_split(char *str, char *charset)
{
	int		i;
	int		count;
	char	**result;
	char	**tmp;

	i = 0;
	count = ft_get_arr_count(str, charset);
	result = malloc(sizeof(char **) * (count + 1));
	if (!result)
		return (NULL);
	result[count] = NULL;
	tmp = result;
	while (str[i])
	{
		if (str[i] && ft_str_contains_char(str[i], charset) < 0)
		{
			i = ft_append_strings(str, charset, &i, result);
			if (i == -1)
				return (NULL);
			result++;
		}
		else
			i++;
	}
	return (tmp);
}

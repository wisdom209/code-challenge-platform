/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 18:48:49 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/04 19:13:57 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * is_sep - is a delimiter
 * @c: char
 * @del_set: delimiters
 *
 * Return: index of delimiter else (-1);
 */
int	is_sep(char c, char *del_set)
{
	int	i;

	i = 0;
	while (del_set[i])
	{
		if (c == del_set[i])
			return (i);
		i++;
	}
	return (-1);
}

/**
 * split_len - Number of words
 * @str: string
 * @charset: delimiters
 *
 * Return: int
 */
int	split_len(char *str, char *charset)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) >= 0)
			i++;
		else
		{
			count++;
			while (str[i] && is_sep(str[i], charset) < 0)
				i++;
		}
	}
	return (count);
}

/**
 * ft_get_word - get the word needed
 * @str: string
 * @start: start offset
 * @end: end index
 *
 * Return: string
 */
char	*ft_get_word(char *str, int start, int end)
{
	char	*word;
	int		i;

	i = 0;
	word = malloc(sizeof(char) * (end - start + 1));
	i = 0;
	while (start < end)
	{
		word[i] = str[start];
		i++;
		start++;
	}
	word[i] = '\0';
	return (word);
}

/**
 * ft_split - split words by delimiter
 * @str: string of words
 * @charset: string of delimiters
 *
 * Return: array of split words
 */
char	**ft_split(char *str, char *charset)
{
	char	**split;
	int		word_index;
	int		i;
	int		start;

	split = malloc(sizeof(char *) * (split_len(str, charset) + 1));
	if (!split)
		return (NULL);
	i = 0;
	word_index = 0;
	while (str[i])
	{
		if (is_sep(str[i], charset) >= 0)
			i++;
		else
		{
			start = i;
			while (is_sep(str[i], charset) < 0)
				i++;
			split[word_index++] = ft_get_word(str, start, i);
		}
	}
	return (split[word_index] = NULL, split);
}

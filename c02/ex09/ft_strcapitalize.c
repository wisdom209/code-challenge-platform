/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 10:53:36 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/21 12:28:12 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * is_alphanumeric - finds if char is alphanumeric
 * @c: character
 *
 * Return: int
 */
int	is_alphanumeric(char c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	if (c >= 'A' && c <= 'Z')
		return (1);
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

/**
 * is_punctuation_or_space - check if a punctuations or space
 * @c: character
 *
 * Return: int
 */
int	is_punctuation_or_space(char c)
{
	if (c >= 32 && c < 127)
	{
		if (is_alphanumeric(c) == 0)
			return (1);
	}
	return (0);
}

/**
 * ft_strcapitalize - Capitalizes the first letter of each word
 * and transforms all other letters to lowercase.
 * A word is a string of alphanumeric characters
 *
 * @str: string of characters
 *
 * Return: string
 */
char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (i == 0 && str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		if (i > 0)
		{
			if (is_alphanumeric(str[i]) == 1)
			{
				if (is_punctuation_or_space(str[i - 1]) == 1)
				{
					if (str[i] >= 'a' && str[i] <= 'z')
						str[i] = str[i] - 32;
				}
			}
		}
		i++;
	}
	return (str);
}

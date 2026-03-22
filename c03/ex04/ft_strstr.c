/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 05:26:40 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/22 05:49:26 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * ft_is_substr - confirms substring in a string
 * @str: string of characters
 * @substr: string of characters
 *
 * Return: int
 */
int	ft_is_substr(char *str, char *substr)
{
	int	i;
	int	substr_len;

	i = 0;
	substr_len = 0;
	while (substr[substr_len])
		substr_len++;
	while (i < substr_len)
	{
		if (!str[i] || str[i] != substr[i])
			return (0);
		i++;
	}
	return (1);
}

/**
 * ft_strstr - Reproduce behaviour of strstr
 * @str: source string
 * @to_find: substring to find in str
 *
 * Return: point to located substring
 */
char	*ft_strstr(char *str, char *to_find)
{
	while (*str)
	{
		if (ft_is_substr(str, to_find) == 1)
			return (str);
		str++;
	}
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 19:08:05 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 19:56:27 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/**
 * ft_str_contains - check str contains char
 * @c: characters
 * @str: string
 *
 *
 * Return: index of character else -1
 */

int	ft_str_contains(char c, char *str)
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
 * ft_strlen - Reproduces strlen
 * @str: string to count
 *
 * Return: int
 */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

/**
 * ft_atoi_base - converts string to int representation
 * @str: string of characters
 * @base: base
 *
 * Return: int
 */
int	ft_atoi_base(char *str, char *base)
{
	int	is_neg;
	int	result;
	int	base_len;

	base_len = ft_strlen(base);
	is_neg = 1;
	while (*str && *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			is_neg *= -1;
		str++;
	}
	result = 0;
	while (ft_str_contains(str[0], base) >= 0 && *str)
	{
		result = (result * base_len) + ft_str_contains(*str, base);
		str++;
	}
	return (result * is_neg);
}

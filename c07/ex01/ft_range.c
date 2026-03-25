/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 06:06:39 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/25 06:20:49 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * ft_range - Display ints between min and max
 * @min: minimum number (included)
 * @max: maximum number (excluded)
 *
 * Return: array of integers
 */
int	*ft_range(int min, int max)
{
	int	*range;
	int	i;

	range = malloc(max - min);
	if (!range)
		return (NULL);
	i = 0;
	while (i < (max - min))
	{
		range[i] = min + i;
		i++;
	}
	return (range);
}

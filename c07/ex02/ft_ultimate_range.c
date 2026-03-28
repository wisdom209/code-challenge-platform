/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 12:55:41 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/28 13:07:14 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/**
 * ft_ultimate_range - Allocates and assigns an array of
 * ints containing all values between min and max.
 *
 * @range: array of ints
 * @min: minimum value (included)
 * @max: maximum value (excluded)
 *
 * Return: size of array, or -1 on error,
 * sets range to NULL if min>=max.
 */
int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	*buffer;

	if (min >= max)
	{
		*range = NULL;
		return (-1);
	}
	buffer = malloc((sizeof(int) * (max - min)));
	if (buffer == NULL)
	{
		*range = NULL;
		return (-1);
	}
	i = 0;
	while (min < max)
	{
		buffer[i] = min;
		min++;
		i++;
	}
	*range = buffer;
	return (max - min);
}

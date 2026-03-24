/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 22:06:08 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/24 22:12:32 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * ft_is_prime - check if a number is prime
 * @nbr: number
 *
 * Return: 1 if prime, else 0
 */
int	ft_is_prime(int nbr)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

/**
 * ft_find_next_prime - Return the next prime number
 * greater than or equal to the number given
 * @nb: number
 *
 * Return: int
 */
int	ft_find_next_prime(int nb)
{
	while (1)
	{
		if (ft_is_prime(nb) == 1)
			return (nb);
		nb++;
	}
	return (0);
}

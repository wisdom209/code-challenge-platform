/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_boolean.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 06:02:40 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/29 06:41:10 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_BOOLEAN_H
# define FT_BOOLEAN_H

# include <unistd.h>
# include <stdlib.h>

# define TRUE 1

# define FALSE 0

# define EVEN_MSG "I have an even number of arguments.\n"

# define ODD_MSG "I have an odd number of arguments.\n"

# define SUCCESS 0

# define EVEN is_even

static inline int	is_even(int nbr)
{
	if (nbr % 2 == 0)
		return (1);
	return (0);
}
typedef int	t_bool;
void	ft_putstr(char *str);
t_bool	ft_is_even(int nbr);
#endif

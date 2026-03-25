/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 03:17:49 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/25 04:37:43 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

/**
 * ft_abs - get absolute value of number
 * @nbr: number
 *
 * Return: int
 */
int	ft_abs(int nbr)
{
	if (nbr < 0)
		return (nbr * -1);
	return (nbr);
}

/**
 * ft_is_safe - checks if queens can attack each other
 *
 * @row: current row
 * @col: current column
 * @pos: array of queen placements
 *
 * Return: 1 if safe, else 0
 */
int	ft_is_safe(int row, int col, int *pos)
{
	int	r;
	int	col_checked;

	r = 0;
	while (r < row)
	{
		col_checked = pos[r];
		if (col_checked == col)
			return (0);
		if (ft_abs(r - row) == ft_abs(col_checked - col))
			return (0);
		r++;
	}
	return (1);
}

/**
 * ft_write_comb - write the n queens
 * @pos: array to print
 * @n: number of queens
 *
 * Return: void
 */
void	ft_write_comb(int *pos, int n)
{
	int		i;
	char	c;

	i = 0;
	while (i < n)
	{
		c = pos[i] + '0';
		write(1, &c, 1);
		i++;
	}
	write(1, "\n", 1);
}

/**
 * ft_solve - solve for n queens
 * @row: current row
 * @pos: array of queen placements
 * @n: number of queens
 *
 * Return: number of possibilities
 */
int	ft_solve(int row, int *pos, int n)
{
	int		count;
	int		col;

	count = 0;
	if (row == n)
		return (ft_write_comb(pos, n), 1);
	col = 0;
	while (col < n)
	{
		if (ft_is_safe(row, col, pos) == 1)
		{
			pos[row] = col;
			count = count + ft_solve(row + 1, pos, n);
		}
		col++;
	}
	return (count);
}

/**
 * ft_ten_queens_puzzle - display all possible placements
 * of queens on a chessboard without them being able to
 * attack each other
 *
 * Return: void
 */
int	ft_ten_queens_puzzle(void)
{
	int	pos[4];
	int	count;

	count = ft_solve(0, pos, 4);
	return (count);
}

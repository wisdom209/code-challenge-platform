#include <unistd.h>
#include <stdio.h>

/**
 * abs - Get the absolute value of a number
 * @nb: number
 *
 * Return: int
 */
int abs(int nb)
{
	if (nb < 0)
		return (-nb);
	return (nb);
}

/**
 * is_safe - check for no conflicts in queen position
 * @row: rows above
 * @col: columns above
 * @pos: position array
 *
 * Return: int
 */
int is_safe(int row, int col, int *pos)
{
	int current_column, r;

	for (r = 0; r < row; r++)
	{
		current_column = pos[r];

		if (current_column == col)
			return (0);
		if (abs(row - r) == abs(col - current_column))
			return (0);
	}
	return (1);
}

/**
 * solve - solve n queens
 * @nb: number of squares on board
 * @pos: board array
 * @row: solve for this row
 *
 * Return: count
 */

int solve(int row, int nb, int *pos)
{
	int count, col, i;

	if (row == nb)
	{
		for (i = 0; i < nb; i++)
		{
			printf("%d", pos[i]);
		}
		printf("\n");
		return (1);
	}

	count = 0;
	for (col = 0; col < nb; col++)
	{
		if (is_safe(row, col, pos) == 1)
		{
			pos[row] = col;
			count = solve(row + 1, nb, pos) + count;
		}
	}
	return (count);
}

/**
 * ft_ten_queens_puzzle - solve n queens puzzle
 *
 * Return: int
 */
int ft_ten_queens_puzzle(void)
{
	int pos[10], count;

	count = solve(0, 4, pos);
	return (count);
}

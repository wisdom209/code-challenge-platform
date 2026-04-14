/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:02:04 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/14 19:25:09 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_tail.h"

/**
 * ft_putstr - display string
 * @str: string
 * @des: which file descriptor to print to
 * @flag: error flag
 * Return: void
 */
void	ft_putstr(char *str, int des, int flag)
{
	int		i;
	char	*a;
	char	*b;

	a = "ft_tail: cannot open '";
	b = "' for reading: No such file or directory\n";
	if (flag == 1)
	{
		while (*a)
			write(des, a++, 1);
		while (*str)
			write(des, str++, 1);
		while (*b)
			write(des, b++, 1);
		return ;
	}
	i = 0;
	while (str[i])
	{
		write(des, &str[i], 1);
		i++;
	}
}

/**
 * ft_getnb - char string to number
 * @str: string
 * @errored: set to 1 if error occurred
 *
 * Return: int
 */
int	ft_getnb(char *str, int *errored)
{
	int	acc;
	int	i;

	acc = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] > '9' || str[i] < '0')
		{
			ft_putstr("ft_tail: invalid number of bytes: ‘", 2, 0);
			ft_putstr(str, 2, 0);
			ft_putstr("’\n", 2, 0);
			*errored = 1;
			return (1);
		}
		acc = (acc * 10) + (str[i] - '0');
		i++;
	}
	if (acc == 0)
		return (*errored = 1, 0);
	return (acc);
}

/**
 * ft_c_print - prints the tail bytes in circular buffer
 * @buffer: container for characters to be printed
 * @buf: int buffer with start index at 0 and end index at 1
 * @files: name of files with content to be printed
 * @index: index of files to be printed
 *
 * Return: void
 */
void	ft_c_print(char *buffer, int *buf, char **files, int index)
{
	int	i;
	int	start;
	int	end;

	start = buf[0] % buf[1];
	end = buf[1];
	if (files[1])
	{
		ft_putstr("==> ", 1, 0);
		if (files[index][0] == '-' && files[index][1] == '\0')
			ft_putstr("standard input", 1, 0);
		else
			ft_putstr(files[index], 1, 0);
		ft_putstr(" <==\n", 1, 0);
	}
	i = start;
	while (i < end && buf[0] >= buf[1])
		write(1, &buffer[i++], 1);
	i = 0;
	while (i < start)
		write(1, &buffer[i++], 1);
}

/**
 * get_fd - Get the file descriptor
 * @fs: list of file names
 * @of: index to start reading file names from
 *
 * Return: int
 */
int	get_fd(char **fs, int of)
{
	int	fd;

	if (!fs[of])
		fd = 1;
	else if (fs[of][0] == '-' && fs[of][1] == '\0')
	{
		if (of != 0)
			ft_putstr("\n==> standard input <==", 1, 0);
		fd = 1;
	}
	else
		fd = open(fs[of], O_RDONLY);
	if (of > 0 && fs[of] && fd != -1)
		ft_putstr("\n", 1, 0);
	return (fd);
}

/**
 * ft_tail_bytes - get the tail bytes by count
 * @count: no of bytes to get
 * @fs: names of files to print their tail bytes
 * @of: offset of where to start reading file names
 *
 * Return: int
 */
int	ft_tail_bytes(int count, char **fs, int of)
{
	int		fd;
	char	*buffer;
	int		i;
	int		counts[2];

	buffer = malloc(count);
	if (!buffer)
		return (1);
	while (1)
	{
		fd = get_fd(fs, of);
		if (fd == -1)
			return (free(buffer), ft_putstr(fs[of], 2, 1), 1);
		i = 0;
		while (read(fd, &buffer[i % count], 1) > 0)
			i++;
		counts[0] = i;
		counts[1] = count;
		ft_c_print(buffer, counts, fs, of);
		close(fd);
		if (!fs[of])
			break ;
		of++;
	}
	return (free(buffer), 0);
}

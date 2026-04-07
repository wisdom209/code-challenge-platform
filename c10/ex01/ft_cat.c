/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 08:12:01 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/07 18:55:57 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <string.h>
#include <unistd.h>
#include <errno.h>

/**
 * ft_strcmp - compare strings
 * @s1: string
 * @s2: string
 *
 * Return: 0 if same else char ascii diff
 */
int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return (s1[i] - s2[i]);
}

/**
 * ft_puterr - write a string to stdout
 * @cmd: command
 * @file_name: file name
 * @str: string
 *
 * Return: int
 */
int	ft_puterr(char *cmd, char *file_name, char *str)
{
	while (*cmd)
		write(2, cmd++, 1);
	write(2, ": ", 2);
	while (*file_name)
		write(2, file_name++, 1);
	write(2, ": ", 2);
	while (*str)
		write(2, str++, 1);
	write(2, "\n", 1);
	return (1);
}

/**
 * ft_docat - Reproduce the behaviour of cat (man cat)
 * @fd: file descriptor
 * @cmd: command
 * @file_name: file name
 * @exit_status: int
 *
 * Return: int
 */
int	ft_docat(int fd, char *cmd, char *file_name, int exit_status)
{
	char	buffer[4096];
	ssize_t	bytes_read;

	while (1)
	{
		bytes_read = read(fd, buffer, 4096);
		if (bytes_read < 0)
		{
			exit_status = ft_puterr(cmd, file_name, strerror(errno));
			break ;
		}
		if (bytes_read > 0)
			write(1, buffer, bytes_read);
		else
			break ;
	}
	return (exit_status);
}

/**
 * main - Reproduce behaviour of cat (man cat)
 * @argc: cli argument count
 * @argv: cli argument string array
 *
 * Return: void
 */
int	main(int argc, char **argv)
{
	int		fd;
	int		i;
	int		exit_status;

	exit_status = 0;
	if (argc == 1)
		exit_status = ft_docat(0, argv[0], "stdin", exit_status);
	i = 1;
	while (argv[i] != NULL)
	{
		if (ft_strcmp(argv[i], "-") == 0)
			exit_status = ft_docat(0, argv[0], "-", exit_status);
		else
		{
			fd = open(argv[i], O_RDONLY);
			if (fd == -1)
				exit_status = ft_puterr(argv[0], argv[i], strerror(errno));
			else
				exit_status = ft_docat(fd, argv[0], argv[i], exit_status);
			if (fd != -1)
				close(fd);
		}
		i++;
	}
	return (exit_status);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 05:10:25 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/05 05:43:13 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <fcntl.h>
/**
 * main - read and display content of file
 * @argc: cli argument count
 * @argv: cli arguments array
 *
 * Return: int
 */
int	main(int argc, char **argv)
{
	char	c;
	int		fd;

	if (argc < 2)
		return (write(1, "File name missing\n", 18), -1);
	if (argc > 2)
		return (write(1, "Too many arguments\n", 19), -1);
	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		return (write(1, "Cannot read file\n", 17), -1);
	while (read(fd, &c, 1) > 0)
		write(1, &c, 1);
	close(fd);
	return (0);
}

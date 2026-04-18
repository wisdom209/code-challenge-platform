/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 18:04:14 by wisdom            #+#    #+#             */
/*   Updated: 2026/04/18 19:51:01 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_TAIL_H
# define FT_TAIL_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <errno.h>
# include <fcntl.h>
# include <stdio.h>

void	ft_putstr(char *str, int des, int flag);
int		ft_getnb(char *str, int *errored);
void	ft_c_print(char *buffer, int *buf, char **files, int index);
int		ft_tail_bytes(int count, char **fs, int of);
int		get_fd(char **fs, int of);
#endif

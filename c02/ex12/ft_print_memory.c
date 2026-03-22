/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wisdom <ononiwuwisdom@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 13:58:27 by wisdom            #+#    #+#             */
/*   Updated: 2026/03/22 04:29:56 by wisdom           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

/**
 * ft_print_hex_addr - print address of memory
 * @addr: address pointer
 *
 * Return: void
 */
void	ft_print_hex_addr(void *addr)
{
	char			*hex_base_values;
	char			hex_buffer[17];
	long			i;
	long			address;

	hex_base_values = "0123456789abcdef";
	address = (long)(addr);
	hex_buffer[16] = '\0';
	i = 15;
	while (i >= 0)
	{
		hex_buffer[i] = hex_base_values[address % 16];
		address /= 16;
		i--;
	}
	i = 0;
	while (hex_buffer[i])
	{
		write(1, &hex_buffer[i], 1);
		i++;
	}
	write(1, ": ", 2);
}

/**
 * ft_print_hex_repr - print hex value of contents
 * @addr: memory address
 * @index: start_index
 * @size: size of content
 *
 * Return: void
 */
void	ft_print_hex_repr(void *addr, unsigned int index, unsigned int size)
{
	char			index_0;
	char			index_1;
	char			*hex_base_values;
	unsigned char	*address;
	unsigned int	i;

	i = 0;
	hex_base_values = "0123456789abcdef";
	address = (unsigned char *)addr;
	while (i < 16)
	{
		if (i + index < size)
		{
			index_0 = hex_base_values[address[i] / 16];
			index_1 = hex_base_values[address[i] % 16];
			write(1, &index_0, 1);
			write(1, &index_1, 1);
			write(1, " ", 1);
		}
		else
			write(1, "   ", 3);
		i++;
	}
}

/**
 * ft_show_printables - show the printable content
 * @addr: memory address
 * @index: start_index
 * @size: size of content
 *
 * Return: void
 */
void	ft_show_printables(void *addr, unsigned int index, unsigned int size)
{
	unsigned int	i;
	unsigned char	*address;

	address = (unsigned char *)addr;
	i = 0;
	while (i < 16)
	{
		if (i + index < size)
		{
			if (address[i] < 32 || address[i] == 127)
				write(1, ".", 1);
			else
				write(1, &address[i], 1);
		}
		i++;
	}
}

/**
 * ft_print_memory - Displays memory area in hexadecimal
 * and printable characters.
 *
 * @addr: memory address
 * @size: size of memory content
 *
 * Return: memory address
 */
void	ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;

	if (size <= 0)
		return ;
	i = 0;
	while (i < size)
	{
		ft_print_hex_addr(addr + i);
		ft_print_hex_repr(addr + i, i, size);
		ft_show_printables(addr + i, i, size);
		write(1, "\n", 1);
		i += 16;
	}
	return (addr);
}

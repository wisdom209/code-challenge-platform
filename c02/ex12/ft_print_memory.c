#include <unistd.h>

/**
 * ft_rev_array - reverse array
 * @str: string array
 * @size: string size
 *
 * Return: string
 */
char *ft_rev_array(char *str, unsigned int size)
{
	int i, half_size;
	char tmp;

	half_size = size / 2;

	for (i = 0; i < half_size; i++)
	{
		tmp = str[i];
		str[i] = str[size - i - 1];
		str[size - i - 1] = tmp;
	}

	return (str);
}

/**
 * ft_print_address - print only address
 * @ptr: pointer address
 * @ptr_size: pointer size
 *
 * Return: void
 */
void ft_print_address(unsigned long ptr, unsigned long ptr_size)
{
	unsigned int i;
	char *letters, *hex_return;
	char hex_buffer[16];

	letters = "0123456789abcdef";

	for (i = 0; i < ptr_size; i++)
	{
		hex_buffer[i] = letters[ptr % ptr_size];
		ptr = ptr / ptr_size;
	}

	hex_return = ft_rev_array(hex_buffer, ptr_size);

	write(1, hex_return, ptr_size);
	write(1, ": ", 2);
}

/**
 * ft_print_hex - print the hex of address
 * @ptr_size: number
 * @addr: pointer
 *
 * Return: void
 */
void ft_print_hex(unsigned long ptr_size, void *addr)
{
	unsigned int i;
	char *letters;
	unsigned char *addr_str;

	letters = "0123456789abcdef";
	addr_str = (unsigned char *)addr;

	for (i = 0; i < ptr_size; i++)
	{
		if (addr_str[i] == '\0')
		{
			while (i < ptr_size)
			{
				write(1, "   ", 3);
				i++;
			}
			break;
		}
		else
		{
			write(1, &letters[addr_str[i] / ptr_size], 1);
			write(1, &letters[addr_str[i] % ptr_size], 1);
			write(1, " ", 1);
		}
	}
}

/**
 * ft_print_memstr - print memory string representation
 * @offset: number - string offset
 * @ptr_size: size of pointer
 * @addr: address of string
 *
 * Return: void
 */
void ft_print_memstr(unsigned int offset, unsigned long ptr_size, void *addr)
{
	unsigned long i;
	unsigned char *addr_str;

	addr_str = (unsigned char *)addr;

	for (i = 0; i < ptr_size; i++)
	{
		if (addr_str[offset + i] == '\0')
			break;
		if (addr_str[offset + i] < 32)
			write(1, ".", 1);
		else
			write(1, &addr_str[offset + i], 1);
	}
}

/**
 * ft_print_memory - entry
 * @addr: pointer
 * @size: number
 *
 * Return: void
 */
void *ft_print_memory(void *addr, unsigned int size)
{

	unsigned int i, string_offset;
	unsigned long ptr, ptr_size;

	ptr_size = sizeof(ptr) * 2;

	for (i = 0; i <= size / ptr_size; i++)
	{
		ptr = (unsigned long)addr + (ptr_size * i);
		string_offset = ptr_size * i;

		ft_print_address(ptr, ptr_size);
		ft_print_hex(ptr_size, (char *)addr + (ptr_size * i));
		ft_print_memstr(string_offset, ptr_size, addr);

		write(1, "\n", 1);
	}

	return (addr);
}

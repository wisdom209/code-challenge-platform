Turn-in directory: c03/ex05/

Files to turn in: ft_strlcat.c

Allowed functions: none specified

Prototype: unsigned int ft_strlcat(char *dest, char *src, unsigned int size);

Description: Reproduce the behavior of strlcat (man strlcat). Appends src to dest with size limitation, ensuring null termination. Returns the total length of the string it tried to create (initial dest length + src length). If size <= dest length, returns size + src length.

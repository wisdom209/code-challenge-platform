#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * reverseString - Reverse a string
 * @str: The string to reverse
 *
 * Return: char*
 */
char *reverseString(const char str[])
{
	int len;

	len = strlen(str);

	/* Allocate memory for reversed string (+1 for null terminator) */
	char *reversed = (char *)malloc((len + 1) * sizeof(char));

	if (reversed == NULL)
		return (NULL); /* // Memory allocation failed */

	/* Copy characters in reverse order */
	for (int i = 0; i < len; i++)
		reversed[i] = str[len - 1 - i];

	/*  // Add null terminator */
	reversed[len] = '\0';

	return (reversed);
}

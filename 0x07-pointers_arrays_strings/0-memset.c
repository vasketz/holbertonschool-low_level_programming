#include "holberton.h"
#include <stdio.h>

/**
 * _memset - fills the first n bytes of the memory area
 * @s: A pointer to the memory area to be filled.
 * @b: The character to fill the memmory area with.
 * @n: the number of bytes to be filled.
 *
 * Return: a pointer to the filled memory area @s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char value = b;

	for (index = 0; index < n; index++)
		s[index] = value;

	return (s);
}

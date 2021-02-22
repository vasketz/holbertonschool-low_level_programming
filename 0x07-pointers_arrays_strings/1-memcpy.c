#include <stdio.h>
#include "holberton.h"

/**
 * memcpy - copy the first n bytes of the memory area
 *      pointed to by @s with the constant byte @c.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the filled memory area @s.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *csrc = (char *)src;
	char *cdest = (char *)dest;
	unsigned int index;

	for (index = 0; index < n; index++)
		cdest[index] = csrc[index];

	return (cdest);
}

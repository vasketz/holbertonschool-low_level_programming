#include <stdio.h>
#include "holberton.h"

/**
 * _memcpy - copy the first n bytes of the memory area
 *      pointed to by @dest with the constant byte @src.
 * @dest: A pointer to the memory area to be filled.
 * @src: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: a pointer to the filled memory area @dest.
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

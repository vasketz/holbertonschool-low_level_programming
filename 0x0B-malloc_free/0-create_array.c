#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Create an array
 * @c: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: string.
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i = 0;

	ptr = malloc((size + 1) * sizeof(*ptr));
	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		if (ptr == 0)
		{
			return (0);
		}
		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	}
		return (ptr);
}

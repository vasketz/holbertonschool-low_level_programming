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
	char *ps;
	unsigned int i;

	ps = malloc((size + 1) * sizeof(char));
	if (ps == NULL)
	{
		return (0);
	}
	i = 0;
	while (i < size)
	{
		ps[i] = c;
		i++;
	}
	ps[i] = '\0';
	return (ps);
}

#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - search for an integer
 * @array: array.
 * @size: size of elements an array.
 * @cmp: is a pointer to a function.
 * Return: -1 if no elements matches.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array != 0 && cmp != 0)
	{
		i = 0;
		while (i < size)
		{
			if ((*cmp)(array[i]) != 0)
			{
				return (i);
			}
			i++;
		}
	}
	if (size <= 0)
	{
		return (-1);
	}
	return (-1);
}

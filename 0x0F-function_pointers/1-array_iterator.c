#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - print an array of intergers
 * @array: an array
 * @size: size
 * @action: pointer to function
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != '\0' && array != '\0')
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}

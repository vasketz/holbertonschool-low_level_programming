#include "function_pointers.h"
#include <stdio.h>

/**
 * @brief 
 * 
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != '\0')
	{
		for (i = 0; i < size; i++)
		{
			(*action)(array[i]);
		}
	}
}
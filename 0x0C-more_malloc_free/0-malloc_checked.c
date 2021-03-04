#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * @brief 
 * 
 */

void *malloc_checked(unsigned int b)
{
 	unsigned int *ptrc;
	 
	ptrc = (unsigned int *)malloc(b);
	if (ptrc == NULL)
	{
		exit (98);
	}
	return (ptrc);
}
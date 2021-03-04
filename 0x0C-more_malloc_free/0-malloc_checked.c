#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocated space in memory
 * @b: is a variable
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	unsigned int *ptrc;

	ptrc = (unsigned int *)malloc(b);
	if (ptrc == NULL)
	{
		exit(98);
	}
	return (ptrc);
}

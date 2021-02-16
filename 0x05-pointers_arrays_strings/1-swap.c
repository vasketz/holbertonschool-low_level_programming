#include "holberton.h"
#include <stdio.h>

/**
 * swap_int - check the code for Holberton School students.
 *@a: is a pointer variable
 *@b: is a pointer variable
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

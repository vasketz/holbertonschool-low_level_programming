#include "holberton.h"
#include <stdio.h>
void swap_int(int *a, int *b);
/**
 * reverse_array - reverse a int array
 * @a: variable pointer
 * @n: array elements
 * void.
 */
void reverse_array(int *a, int n)
{
	int *fp = a;
	int *sp = (a + n - 1);

	while (fp < sp)
	{
		swap_int(fp, sp);
		fp++;
		sp--;
	}
}
/**
 * swap_int - change the value
 * @a: pointer variable
 * @b: pointer variable
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}

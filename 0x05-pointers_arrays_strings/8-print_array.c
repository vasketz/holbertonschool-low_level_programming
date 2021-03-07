#include "holberton.h"
#include <stdio.h>

/**
 * print_array - check the code for Holberton School students.
 *@a: is a pointer
 *@n: is a size
 * Return: Always 0.
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d, ", a[i] - 1);
		
	}
	printf("\n");
}

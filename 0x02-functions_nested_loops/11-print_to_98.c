#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - check the code for Holberton School students.
 *@n: is a variable
 * Return: Always 0.
 */
void print_to_98(int n)
{
	for (; n <= 98; n++)
	{
		printf("%d, ", n);
	}
	for (; n >= 98; n--)
	{
		printf("%d, ", n);
	}
	printf("\n");
}

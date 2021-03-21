#include "holberton.h"
#include <stdio.h>

/**
 * print_number - check the code for Holberton School students.
 *@n: variable number
 * void.
 */

void print_number(int n)
{
	unsigned int u = n;

	if (n < 0)
	{
		_putchar('-');
		u = -u;
	}
	if ((u / 10) != 0)
	{
		print_number(u / 10);
	}
	_putchar((u % 10) + '0');
}

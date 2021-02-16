#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int n;

	for (n = *s; n >= 0; --n)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

#include "holberton.h"
#include <string.h>
/**
 * print_rev - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = *s - 1; i >= 0; i-- )
	{
		_putchar(s[i]);
	} 
	_putchar('\n');
}

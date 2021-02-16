#include "holberton.h"

/**
 * _puts - check the code for Holberton School students.
 *@str: is a pointer variable
 * Return: Always 0.
 */
void _puts(char *str)
{
	int p = 0;

	while (str[p] != 0)
	{
		_putchar(str[p]);
		p++;
	}
	_putchar('\n');
}

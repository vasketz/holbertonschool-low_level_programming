#include "holberton.h"

/**
 * puts_half - check the code for Holberton School students.
 *@str: is a pointer variable
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int x, y, z;

	for (x = 0; str[x] != '\0'; x++)
	{}
	if (x % 2 == 0)
	{
		y = x / 2;

		for (z = y; z < x; z++)
		{
			_putchar(str[z]);
		}
	}
	else
	{
		y = (x - 1) / 2;

		for (z = y + 1; z < x; z++)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}

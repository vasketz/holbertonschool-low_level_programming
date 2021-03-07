#include "holberton.h"
/**
 * puts2- check the code for Holberton School students.
 *@str: is a pointer variable
 * Return: Always 0.
 */
void puts2(char *str)
{
	int x, y;

	for (x = 0; str[x] != '\0'; x++)
	{}

	for (y = 0; y < x; y += 2)
	{
		_putchar(str[y]);
	}
	_putchar('\n');
}

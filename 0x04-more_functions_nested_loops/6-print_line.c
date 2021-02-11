#include "holberton.h"

/**
 * print_line - check the code for Holberton School students.
 *@n: is a variable
 * Return: Always 0.
 */
void print_line(int n)
{
	int line;

	for (line = 1; line <= n; line++)
	{
		_putchar(95);
	}
	_putchar('\n');
}

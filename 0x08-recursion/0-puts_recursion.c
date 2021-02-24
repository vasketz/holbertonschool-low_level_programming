#include "holberton.h"

/**
 * _puts_recursion - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void _puts_recursion(char *s)
{
	if (s[0] == '\0')
	{
		_putchar('\n');
		return;
	}

	if ((s[0] <= 122 && s[0] >= 97) || (s[0] <= 90 && s[0] >= 65))
	{
		_putchar(s[0]);
	}

	if (s[0] == 32)
	{
		_putchar(s[0]);
	}
	_puts_recursion(s + 1);
}

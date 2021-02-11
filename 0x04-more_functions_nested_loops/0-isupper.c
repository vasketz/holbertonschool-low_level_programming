#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 *@c: is a variable
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c == 'A')
	{
		return (1);
	}
	else if (c != 'A')
	{
		return (0);
	}
	return (0);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - check the code for Holberton School students.
 *@c: is a variable
 * Return: Always 0.
 */
int _isupper(int c)
{
	if (c == 'A' || c == '0')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

#include "holberton.h"
#include <stdio.h>

/**
 * _isdigit - check the code for Holberton School students.
 *@c: is a variable
 * Return: Always 0.
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else if (c != '0' || c != '9')
	{
		return (0);
	}
	return (0);
}

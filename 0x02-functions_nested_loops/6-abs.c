#include "holberton.h"
#include <stdio.h>

/**
 * _abs - computes de absolute value of an integer
 *@n: is a variable
 * Return: Always 0.
 *
 */
int _abs(int n)
{
	if (n >= 0)
	{
		return (n);
	}
	else
	{
		return (-n);
	}
}

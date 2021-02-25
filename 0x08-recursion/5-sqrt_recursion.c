#include "holberton.h"

int _sqrt_compare(int a, int b);
/**
 * _sqrt_recursion - check the code for Holberton School students.
 *@n: is a variable
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0)
	{
		return (0);
	}

	return (_sqrt_compare(1, n));
}

/**
 * _sqrt_compare - do the operation of square root.
 *@a: is a variable
 *@b: is a variable
 * Return: function
 */

int _sqrt_compare(int b, int a)
{
	if ((b * b) == a)
	{
		return (b);
	}

	if ((b * b) > a)
	{
		return (-1);
	}

	return (_sqrt_compare(b + 1, a));
}

#include "holberton.h"

/**
 * _prime_number - check the code for Holberton School students.
 *@a: is a variable
 *@b: is a variable
 * Return: Always 0.
 */

int _prime_number(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	if (!(a % b))
	{
		return (0);
	}
	return (_prime_number(a, b + 1));
}

/**
 * is_prime_number - return the arguments from the second function
 *@n: is a variable
 * Return: Always 0.
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}

	return (_prime_number(n, 2));
}

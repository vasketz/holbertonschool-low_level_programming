#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - check the code for Holberton School students.
 * @n: variable
 * Return: Always 0.
 */


int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list argptr;
	unsigned int i = 0;

	va_start(argptr, n);

	while (i < n)
	{
		sum += va_arg(argptr, int);
		i++;
	}
	va_end(argptr);
	return (sum);
}

#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_numbers - check the code for Holberton School students.
 * @separator: char space.
 * @n: variable
 * void.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argptr;

	va_start(argptr, n);

	while (i < n)
	{
		if (separator != '\0')
		{
			printf("%d", va_arg(argptr, unsigned int));
			if (i < n - 1)
			{
				printf("%s", separator);
			}
		}
		i++;
	}
	printf("\n");
	va_end(argptr);
}

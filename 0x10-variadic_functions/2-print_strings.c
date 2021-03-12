#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>


/**
 * print_numbers - check the code for Holberton School students.
 * @separator: char space.
 * @n: variable
 * void.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list argptr;

	va_start(argptr, n);

	while (i++ < n)
	{
		if (separator != '\0')
		{
			printf("%s", va_arg(argptr, char *));
			if (i < n)
			{
				printf("%s", separator);
			}
		}
		else if (!i)
		{
			printf("(nil)");
		}
	}
	printf("\n");
	va_end(argptr);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print string.
 * @separator: char space.
 * @n: variable
 * void.
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	char *ptr;
	unsigned int i = 0;
	va_list argptr;

	va_start(argptr, n);

	while (i++ < n)
	{
		ptr = va_arg(argptr, char *);

		if (ptr == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", ptr);
		}
		if (separator != '\0')
		{
			if (i < n)
			{
				printf("%s", separator);
			}
		}
	}
	printf("\n");
	va_end(argptr);
}

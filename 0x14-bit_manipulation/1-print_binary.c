#include "holberton.h"
#include <stdarg.h>
/**
 * print_binary - print decimal in binary
 * @n: is a number to prin in binary
 * void.
 */
void print_binary(unsigned long int n)
{
	if (n >> 1)
	{
		print_binary(n >> 1);
	}
		if (n & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
}

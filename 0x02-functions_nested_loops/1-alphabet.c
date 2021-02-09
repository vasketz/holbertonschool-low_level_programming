#include "holberton.h"
/**
 * main - Entry point, program to print alphabet
 *
 *
 * void
 */

void print_alphabet(void)
{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}

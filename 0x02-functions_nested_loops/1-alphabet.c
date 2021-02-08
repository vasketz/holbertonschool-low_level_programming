#include "holberton.h"
/**
 * main - Entry point, program to print alphabet
 *
 * Return: 0
 */

int print_alphabet(void)
{
	int a = 'a';
	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	return(0);
}

#include "holberton.h"
/**
 * print_alphabet - program to print alphabet
 *
 * Return: Always 0 (Success)
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

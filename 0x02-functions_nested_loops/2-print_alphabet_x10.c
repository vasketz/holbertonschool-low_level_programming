#include "holberton.h"
/**
 * main - Entry point, program to print alphabet x 10
 *
 * Return: void
 **/
void print_alphabet_x10(void)
{
	int i;

	for (i = 1; i <= 10; i++)
	{
	int a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
	}
}

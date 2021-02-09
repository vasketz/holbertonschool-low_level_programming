#include "holberton.h"

/**
 * print_last_digit - print the las digit of a number
 *@n: is a variable
 * Return: Always 0.
 */
int print_last_digit(int n)
{
	int ld;

	ld = n % 10;

	if (n < 0)
		ld = ld * -1;
	_putchar (ld + 48);
		return (ld);
}

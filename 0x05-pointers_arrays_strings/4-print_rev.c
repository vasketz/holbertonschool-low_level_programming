#include "holberton.h"
#include <string.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int i;

	for (i = *s; i >= 0; i-- )
	{
		if (s[i] != '\0')
		_putchar(s[i]);
	} 
	_putchar('\n');
}

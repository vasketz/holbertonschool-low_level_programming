#include "holberton.h"
#include <stdio.h>

/**
 * _strspn - check the code for Holberton School students.
 *@s: is a pointer variable.
 *@accept: is a pointer variable.
 *
 * Return: x.
 */
unsigned int _strspn(char *s, char *accept)
{
	int x = 0;
	int y;

	while (*(s + x))
	{
		y = 0;

		while (*(accept + y))
		{
			if (*(s + x) == *(accept + y))
			{
				break;
			}
			y++;
		}
		if (!*(accept + y))
		{
			return (x);
		}
		x++;
	}
	return (x);
}

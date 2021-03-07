#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int x, y, tmp;

	for (x = 0; s[x] != '\0'; x++)
	{}

	for (y = 0, x = x - 1; y < x; y++, x--)
	{
		tmp = s[y];
		s[y] = s[x];
		s[x] = tmp;
	}
}

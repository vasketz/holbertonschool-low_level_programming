#include "holberton.h"
/**
 * binary_to_uint - converts a binary string to unsigned int
 * @b: char pointer variable
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int lon;
	unsigned int x = 1;
	unsigned int y = 0;

	lon = strlen(b);

	for (i = lon - 1; i >= 0; i--)
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		if (b[i] == 49)
		{
			y += x;
		}
		x *= 2;
	}
	return (y);
}

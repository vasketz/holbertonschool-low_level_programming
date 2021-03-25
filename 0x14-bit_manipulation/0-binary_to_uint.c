#include "holberton.h"
/**
 * binary_to_uint - convert binary to unsigned int
 * @b: variable pointer to string
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int lon;
	unsigned int x = 1;
	unsigned int y = 0;

	if (b == NULL)
	{
		return (0);
	}
	for (lon = 0; b[lon] != '\0'; lon++)
	{}

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

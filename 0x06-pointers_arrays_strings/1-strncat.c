#include "holberton.h"
#include <stdio.h>

/**
 * _strncat - check the code for Holberton School students.
 *@dest: is a pointer variable
 *@src: is a pointer variable
 *@n: is a variable
 * Return: Always 0.
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;
	int x = 0;
	int y = 0;

	while (dest[x] != '\0')
	{
		x++;
	}

	while (src[y] && y < n)
	{
		dest[x + y] = src[y];
		y++;
	}
	return (start);
}

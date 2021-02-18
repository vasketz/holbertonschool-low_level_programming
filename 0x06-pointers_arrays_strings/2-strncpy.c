#include "holberton.h"
#include <stdio.h>

/**
 * _strncpy - check the code for Holberton School students.
 *@dest: is a pointer variable
 *@src: is a pointer variable
 *@n: is a variable
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;
	int x = 0;

	while (x < n && src[x] != '\0')
	{
		dest[x] = src[x];
		x++;
	}

	while (x < n)
	{
		dest[x] = '\0';
		x++;
	}
	return (start);
}

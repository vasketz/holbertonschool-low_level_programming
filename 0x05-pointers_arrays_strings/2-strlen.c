#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

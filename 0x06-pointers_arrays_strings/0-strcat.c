#include "holberton.h"
#include <stdio.h>

/**
 * _strcat - check the code for Holberton School students.
 *@dest: is a pointer variable
 *@src: is a pointer varible
 * Return: Always 0.
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}

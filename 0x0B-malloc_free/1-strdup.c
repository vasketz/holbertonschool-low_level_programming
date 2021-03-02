#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - Create an array
 * @s: the address of memory to print
 * @d: the size of the memory to print
 *
 * Return: string.
 */

char *_strcpy(char *d, char *s)
{
	char *saved = d;

	while (*s)
	{
		*d++ = *s++;
	}
	return (saved);
}

/**
 * _strdup - Create an array
 * @str: the size of the memory to print
 * Return: string.
 */

char *_strdup(char *str)
{
	char *ptr;

	ptr = malloc(sizeof(*str));
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		_strcpy(ptr, str);
	}
	if (str == 0)
	{
		return (NULL);
	}
	return (ptr);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcpy(char *dest, char *src);

/**
 * _strdup - Create an array
 * @str: the size of the memory to print
 * Return: string.
 */

char *_strdup(char *str)
{
	char *ptr;
	int i;

	for (i = 0; i < *str + 1; i++)
	{}
	if (str == NULL)
	{
		return (NULL);
	}
	ptr = malloc((*str + 1) * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
		_strcpy(ptr, str);
	return (ptr);
}

/**
 * _strcpy - Create an array
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 *
 * Return: string.
 */


char *_strcpy(char *dest, char *src)
{
	char *saved = dest;

	while (*src)
	{
		*dest++ = *src++;
	}
	*dest = 0;
	return (saved);
}

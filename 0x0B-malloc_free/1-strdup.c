#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strcpy - Create an array
 * @dest: the address of memory to print
 * @src: the size of the memory to print
 *
 * Return: string.
 */

char *_strcpy(char *dest, char *src)
{
	int l, r;

	for (l = 0; src[l] != '\0'; l++)
	{}
	for (r = 0; r < l; r++)
	{
		dest[r] = src[r];
	}
	return (dest);
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

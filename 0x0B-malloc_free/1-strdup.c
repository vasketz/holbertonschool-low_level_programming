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
	int len, count;

	for (len = 0; src[len] != '\0'; len++)
	{}
	for (count = 0; count < len; count++)
	{
		dest[count] = src[count];
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

	ptr = malloc((*str) * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	else
	{
		_strcpy(ptr, str);
	}
	if (str == NULL)
	{
		return (NULL);
	}
	return (ptr);
}

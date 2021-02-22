#include "holberton.h"
#include <stdio.h>

/**
 * _strchr - finds a character in string
 * @s: A pointer to the memory area to be found.
 * @c: The character to find the memmory area with.
 *
 * Return: a pointer to the filled memory area @s
 */
char *_strchr(char *s, char c)
{

	for (;; s++)
	{
		if (*s == c)
		{
			return (s);
		}

		if (!*s)
		{
			return (NULL);
		}
	}
	return (NULL);
}

#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - check the code for Holberton School students.
 *@haystack: is a pointer variable
 *@needle: is a pointer variable
 *
 * Return: NULL.
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *start = haystack;
		char *match = needle;

		while (*haystack && *match && *haystack == *match)
		{
			haystack++;
			match++;
		}

		if (!*match)
		{
			return (start);
		}
		haystack = start + 1;
	}
	return (NULL);
}

#include "holberton.h"
/**
 * string_toupper - converts string to uppercase
 * @str: pointer to string
 * Return: ptr.
 */

char *string_toupper(char *str)
{
	char *ptr = str;
	int i;

	for (i = 0; ptr[i] != '\0'; i++)
	{
		if (ptr[i] >= 'a' && ptr[i] <= 'z')
		{
			ptr[i] -= 32;
		}
	}
	return (ptr);
}

#include "holberton.h"
#include <stdio.h>
int is_blank(char c);
/**
 * cap_string - capitalize string
 * @str: pointer to string
 * Return: char*
 */

char *cap_string(char *str)
{
	int blank;

	if (*str)
	{
		blank = is_blank(*str);

		if (!blank)
		{
			*str &= ~' ';
		}
		cap_string(str + 1);
		if (!blank && !is_blank(*(str + 1)) && *(str + 1))
		{
			*(str + 1) |= ' ';
		}
	}
	return (str);
}
/**
 * is_blank - checks for the spaces and new lines
 * @c: variable
 * Return: int
 */
int is_blank(char c)
{
	return ((c == ' ') || (c == '\t' || c == '\n'));
}

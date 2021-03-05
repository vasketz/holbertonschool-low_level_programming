#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *my_strcat(char *strg1, char *strg2);

/**
 * string_nconcat - concat two strings
 * @s1: pointer variable
 * @s2: pointer variable
 * @n: unsigned variable
 * Return: pointer.
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *space;
	int x, x1;
	unsigned int y, y2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (x = 0; s1[x] != '\0'; x++)
	{}
	for (y = 0; s2[y] != '\0'; y++)
	{}
	if (n >= y)
	{
		space = malloc(x + y + 1 * sizeof(char));
		if (space == 0)
		{
			return (NULL);
		}
		for (x1 = 0; s1[x1] != '\0'; x1++)
		{
			space[x1] = s1[x1];
		}
		for (y2 = 0; s2[y2] != '\0'; y2++)
		{
			space[x1 + y2] = s2[y2];
		}
	}
	else
	{
		space = malloc(x + n + 1 * sizeof(char));
		if (space == 0)
		{
			return (NULL);
		}
		for (x1 = 0; s1[x1] != '\0'; x1++)
		{
			space[x1] = s1[x1];
		}
		for (y2 = 0; y2 < n; y2++)
		{
			space[x1 + y2] = s2[y2];
		}
	}
	space[x1 + y2] = '\0';
	return (space);
}

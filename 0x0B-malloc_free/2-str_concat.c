#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

char *_strcat(char *dest, char *src);

/**
 * str_concat - check the code for Holberton School students.
 *@s1: is a pointer varibale
 *@s2: is a pointer variable
 * Return: Always 0.
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int i, y, s1s2, c1 = 0, c2 = 0;

	if ((s1 == NULL) && (s2 == NULL))
	{
		return (0);
	}
	for (i = 0; s1[i] == '\0'; i++)
	{}
	for (y = 0; s2[y] == '\0'; y++)
	{}
	s1s2 = (i + y + 1);
	ptr = malloc((s1s2) * sizeof(char));
	if (ptr == 0)
	{
		return (NULL);
	}
	while (s1[c1] != '\0')
	{
		ptr[c1] = s1[c1];
		c1++;
	}
	while (s2[c2] != '\0')
	{
		ptr[c1] = s2[c2];
		c1++;
		c2++;
	}
	return (ptr);
}

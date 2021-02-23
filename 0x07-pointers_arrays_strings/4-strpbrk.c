#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
char *_strpbrk(char *s, char *accept)
{
	int x;
	int y;
	int pos;
	int flag = 0;

	for (x = 0; s[x] != '\0'; x++)
		;
	pos = x;

	for (x = 0; accept[x] != '\0'; x++)
	{
		for (y = 0; s[y] != '\0'; y++)
		{
			if (accept[x] == s[y])
			{
				if (y <= pos)
				{
					pos = y;
					flag = 1;
				}
			}
		}	
	}
	if (flag == 1)
	{
		return &s[pos];
	}
	else
	{
		return NULL;
	}
}

#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int izq = 0;
	int der;
	int l = strlen(s);
	char temp;


	for (izq = 0, der = l - 1; izq < (l / 2); izq++, der--)
	{
		temp = s[izq];
		s[izq] = s[der];
		s[der] = temp;
	}
}

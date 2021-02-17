#include "holberton.h"
#include <string.h>
/**
 * rev_string - check the code for Holberton School students.
 *@s: is a pointer variable
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int l, i;
	char *left, *right, ch;

	l = strlen(s);
	left = s;
	right = s + l - 1;

	for (i = 0; i < l / 2; i++)
	{
		ch = *right;
		*right = *left;
		*left = ch;
		left++;
		right--;
	}
}

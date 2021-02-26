#include "holberton.h"

int compare_palindrome(char *s, int l, int i);
int _strlen_recursion(char *s);
/**
 * is_palindrome - check the code for Holberton School students.
 *@s: is a variable
 * Return: Always 0.
 */

int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (compare_palindrome(s, l, 0));
}

/**
 * _strlen_recursion - Calculates the long string
 *@s: is a pointer variable
 * Return: the length of string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

/**
 * compare_palindrome - compares the string to get the palindrome or not
 *@s: is a pointer variable.
 *@l: is a variable
 *@i: is a variable
 * Return: the compare_palindrome function
 */

int compare_palindrome(char *s, int l, int i)
{
	if (i >= l)
	{
		return (1);
	}
	if (s[i] != s[l - 1])
	{
		return (0);
	}
	return (compare_palindrome(s, --l, ++i));
	return (1);
}

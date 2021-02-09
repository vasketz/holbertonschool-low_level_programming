#include "holberton.h"

/**
 *_isalpha - check if c is a letter
 *@c: is a variable
 * Return: Always 0 (Success)
 */
int _islower(int c)
{

	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}

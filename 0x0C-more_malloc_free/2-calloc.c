#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - funtion to return pointer
 * @nmemb: variable
 * @size: variable
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptrc = NULL;
	unsigned int i;

	if (nmemb == 0)
	{
		return (NULL);
	}
	if (size == 0)
	{
		return (NULL);
	}
	ptrc = malloc(nmemb * size);
	if (ptrc == NULL)
	{
		return (0);
	}
	for (i = 0; i < (nmemb * size); i++)
	{
		ptrc[i] = '\0';
	}
	return (ptrc);
}

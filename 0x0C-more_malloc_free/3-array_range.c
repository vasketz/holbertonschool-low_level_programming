#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - create an array of strings
 * @min: variable
 * @max: variable
 *
 * Return: pointer.
 */

int *array_range(int min, int max)
{
	int *ptri;
	int i;
	int x;

	if (min > max)
	{
		return (NULL);
	}
	i = (max - min + 1);
	ptri = malloc(sizeof(int) * i);
	if (ptri == 0)
	{
		return (NULL);
	}
	x = 0;
	while (min <= max)
	{
		ptri[x] = min;
		min++;
		x++;
	}
	return (ptri);
}

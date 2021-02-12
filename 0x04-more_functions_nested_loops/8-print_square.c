#include "holberton.h"

/**
 * print_square - check the code for Holberton School students.
 *@size: is a variable
 * Return: Always 0.
 */
void print_square(int size)
{
	int col;
	int fila;

	for (col = 0; col < size; col++)
	{
		for (fila = 0; fila < size; fila++)
		{
			_putchar(35);
		}
		if (col != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

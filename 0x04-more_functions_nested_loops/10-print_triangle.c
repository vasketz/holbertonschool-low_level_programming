#include "holberton.h"

/**
 * print_triangle - check the code for Holberton School students.
 *@size: is a variable
 * Return: Always 0.
 */
void print_triangle(int size)
{
	int col, fila;
	char esp, alm;

	esp = ' ';
	alm = '#';

	if (size <= 0)
	{
		_putchar('\n');
	}
	for (col = 1; col <= size; col++)
	{
		for (fila = col; fila < size; fila++)
		{
			_putchar(esp);
		}
		for (fila = 1; fila <= col; fila++)
		{
			_putchar(alm);
		}
		_putchar('\n');
	}
}

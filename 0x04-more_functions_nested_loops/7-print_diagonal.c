 #include "holberton.h"

/**
 * print_diagonal - check the code for Holberton School students.
 *@n: is a variable
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int line;
	int col;

	if (n > 0)
		for (col = 0; col < n +1; col++)
		{
			for (line = 0; line < col; line++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
}

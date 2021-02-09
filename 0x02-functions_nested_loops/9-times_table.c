#include "holberton.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void times_table(void)
{
	int x;
	int y;
	int m;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			m = (x * y);

			if (y == 0)
			{
				_putchar('0' + m);
			}
			else if (m <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + m);
			}
			else if (m > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (m / 10));
				_putchar('0' + (m % 10));
			}
		}
		_putchar('\n');
	}
}

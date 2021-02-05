#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point and execute the ramdon number
 *
 * Return: 0
 */

int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
		putchar(i);
	putchar('\n');
	return (0);
}

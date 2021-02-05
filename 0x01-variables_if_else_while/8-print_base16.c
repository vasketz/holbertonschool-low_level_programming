#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point and execute the numbers with putchar
 *
 * Return: 0
 */

int main(void)
{
	int i;
	int l; 

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (l = 'a';l <= 'f'; l++)
		putchar(l);
	putchar('\n');
	return (0);
}

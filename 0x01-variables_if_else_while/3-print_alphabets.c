#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
/**
 * main - Entry point and execute the ramdon number
 *
 * Return: 0
 */

int main(void)
{
	char l;
	char u;

	for (l = 'a'; l <= 'z'; ++l)
		putchar(l);
	for (u = 'A'; u <= 'Z'; ++u)
		putchar(u);
	putchar('\n');
	return (0);
}

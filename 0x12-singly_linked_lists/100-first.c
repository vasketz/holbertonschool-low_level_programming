#include <stdio.h>
int print_(void)__attribute__((constructor));
/**
 * print_ - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int print_(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
	return (0);
}

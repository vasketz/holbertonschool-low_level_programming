#include <stdio.h>

/**
 * main - prints its name followed by a new line
 * @argc: is an argument of the main function.
 * @argv: is an argument of the main function.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}

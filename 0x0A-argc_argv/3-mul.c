#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its name followed by a new line
 * @argc: is an argument of the main function.
 * @argv: is an argument of the main function.
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
	int i;
	int res = 1;

	if (argc != 3)
	{
	printf("Error\n");
	return (1);
	}
	for (i = 1; i < argc; i++)
	{
	res = res * atoi(argv[i]);
	}
		printf("%d\n", res);
	return (0);
}

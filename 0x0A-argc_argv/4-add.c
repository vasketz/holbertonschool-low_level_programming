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
	int res;

	if (*argv[0] < 0)
	{
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (*argv[i] >= '0' && *argv[i] <= '9')
		{
			res = res + atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", res);
	return (0);
}

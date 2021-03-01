#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int isNum(char *n);
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
		if (isNum(argv[i]))
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

/**
 * isNum - prints its name followed by a new line
 * @n: is pointer variable.
 * Return: 0.
 */

int isNum(char *n)
{
	int i = 0;

	while (n[i] != '\0')
	{
		if (isdigit(n[i]))
		{
			i++;
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

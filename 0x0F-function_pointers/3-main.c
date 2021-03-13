#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - main  of program
 * @argc: number of args
 * @argv: string of args
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;
	int (*ptr)(int a, int b);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	num1 = atoi(argv[1]);
	ptr = get_op_func(argv[2]);
	num2 = atoi(argv[3]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(num1, num2);
	printf("%d\n", result);
	return (0);
}

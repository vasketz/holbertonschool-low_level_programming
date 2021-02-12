#include <stdio.h>
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i != 100)
		{
			printf(" ");
		}
		if (i % 3 == 0)
		{
			printf("fizz ");
		}
		if (i % 5 == 0)
		{
			printf("buzz ");
		}
		if (i % 3 != 0 && i % 5 != 0)
		{
			printf("%d ", i);
		}
	}
	printf("\n");
	return (0);
}

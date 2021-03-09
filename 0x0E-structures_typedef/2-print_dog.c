#include <stdio.h>
#include "dog.h"

/**
 * print_dog - check the code for Holberton School students.
 *@d: is pointer.
 * Return: Always 0.
 */
void print_dog(struct dog *d)
{
	if (d == 0)
	{
		return;
	}
	if (d->name != '\0')
	{
		printf("Name: %s\n", d->name);
	}
	else
	{
		printf("Name: %p\n", d->name);
	}

	if (d->age < 0)
	{
		printf("Age: %.6f\n", d->age);
	}
	else
	{
		printf("Age: %p\n", (void *)&d->age);
	}

	if (d->owner != '\0')
	{
	printf("Owner: %s\n", d->owner);
	}
	else
	{
		printf("Owner: %p\n", d->owner);
	}
}

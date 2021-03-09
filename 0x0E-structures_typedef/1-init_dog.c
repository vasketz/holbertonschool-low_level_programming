#include "dog.h"

/**
 * init_dog - Short description
 * @d: struct pointer
 * @name: first member
 *@age: second member
 *@owner: third membber
 * Description: Longer description
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != '\0')
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

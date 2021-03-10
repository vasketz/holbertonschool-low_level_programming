#include "dog.h"
#include <stdlib.h>

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
		free(d->name);
		free(d->owner);
		free(d);
	}
}

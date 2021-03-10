#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - Short description
 * @d: struct pointer
 * Description: Longer description
 */

void free_dog(dog_t *d)
{
	if (d != '\0')
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

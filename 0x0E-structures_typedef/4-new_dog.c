#include <stdio.h>
#include "dog.h"
#include <stdlib.h>
/**
 * new_dog - Description of dog
 * @name: First member
 * @age: Second member
 * @owner: Third member
 *
 * Return: pointer struct
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *doggo;
	int x, y, n, o;

	if (name == NULL || owner == NULL)
		return (NULL);
	doggo = malloc(sizeof(dog_t));
	if (doggo == NULL)
		return (NULL);
	x = 0;
	while (name[x] != 0)
	{
		x++;
	}
	x++;
	doggo->name = malloc(sizeof(char) * x);
	if (doggo->name == NULL)
	{
		free(doggo);
		return (NULL);
	}
	y = 0;
	while (owner[y] != '\0')
	{
		y++;
	}
	y++;
	doggo->owner = malloc(sizeof(char) * y);
	if (doggo->owner == NULL)
	{
		free(doggo->name);
		free(doggo);
		return (NULL);
	}
	for (n = 0; n < x; n++)
		doggo->name[n] = name[n];
	doggo->age = age;
	for (o = 0; o < y; o++)
		doggo->owner[o] = owner[o];
	return (doggo);
}

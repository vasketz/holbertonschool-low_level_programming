#include "lists.h"

/**
 * listint_len - print the elemest of the list
 * @h: is a pointer variable.
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

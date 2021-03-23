#include "lists.h"

/**
 * listint_len - print the elemest of the list
 * @h: is a pointer variable.
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

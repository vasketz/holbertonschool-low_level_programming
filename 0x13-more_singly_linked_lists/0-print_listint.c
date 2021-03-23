#include "lists.h"

/**
 * print_listint - print the elemest of the list
 * @h: is a pointer variable.
 * Return: the number of elements
 */

size_t print_listint(const listint_t *h)
{
	int i;

	if (h == NULL)
	{
		return (0);
	}
	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

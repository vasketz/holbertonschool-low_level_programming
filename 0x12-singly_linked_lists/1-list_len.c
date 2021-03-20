#include "lists.h"
/**
 * list_len - print the number of elements
 * @h: pointer variable
 * Return: length of list_t
 */
size_t list_len(const list_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

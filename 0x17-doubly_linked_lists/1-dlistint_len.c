#include "lists.h"
/**
 * dlistint_len - prints the number of the nodes
 * @h: header of nodes
 * Return: the number of the nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}

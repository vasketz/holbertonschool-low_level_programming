#include "lists.h"
/**
 *print_dlistint - print the int of the all nodes
 *@h: is a header of the nodes
 *Return: total of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}

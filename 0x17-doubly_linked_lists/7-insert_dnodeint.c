#include "lists.h"
/**
 * insert_dnodeint_at_index - insert a new node a the given position
 * @h: double pointer
 * @idx: unsigned int
 * @n: int
 * Return: new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{	dlistint_t *tmp = *h, *new_n = malloc(sizeof(dlistint_t)), *aux = *h;
	unsigned int i = 0, j;

	if (h == NULL)
		return (NULL);
	for (j = 0; aux != NULL; j++)
		aux = aux->next;
	if (idx > j - 1)
		return (NULL);
	if (new_n == NULL)
		return (NULL);
	new_n->n = n;
	if (idx == j)
	{	new_n->prev = aux;
		new_n->next = NULL;
		aux->next = new_n;
		return (new_n);
	}
	if (*h == NULL)
	{	new_n->next = NULL;
		new_n->prev = NULL;
		*h = new_n;
		return (new_n);
	}
	if (idx == 0)
	{	new_n->next = NULL;
		new_n->prev = NULL;
		*h = new_n;
		return (new_n);
	}
	while (i < idx)
	{	tmp = tmp->next;
		if (tmp == NULL)
			return (NULL);
		i++;
	}
	new_n->next = tmp;
	new_n->prev = tmp->prev;
	tmp->prev->next = new_n;
	tmp->prev = new_n;
	return (new_n);
}

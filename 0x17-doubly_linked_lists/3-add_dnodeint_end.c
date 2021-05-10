#include "lists.h"
/**
 * add_dnodeint_end - adds a node a end of list
 * @head: double pointer
 * @n: variable
 * Return: node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *tmp;
	int i;

	if (!head)
	{
		return (NULL);
	}
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		tmp = *head;
		for (i = 0; tmp->next != NULL; i++)
		{
			tmp = tmp->next;
		}
		new->n = n;
		new->next = NULL;
		tmp->next = new;
		new->prev = tmp;
		return (new);
	}
}

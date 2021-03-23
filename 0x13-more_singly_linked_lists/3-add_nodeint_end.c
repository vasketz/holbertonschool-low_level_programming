
#include "lists.h"
/**
 * add_nodeint_end - create a new node at the end
 * @head: double pointer
 * @n: pointer string
 * Return: list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	if (*head == NULL)
	{

		*head = new;
		new->n = n;
		new->next = NULL;
		return (*head);
	}
	else
	{
		listint_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
			last->next = new;
			new->n = n;
			new->next = NULL;
			return (last);
	}
}

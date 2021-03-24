#include "lists.h"
/**
 * free_listint2 - free allocated memory
 * @head: pointer
 * Void.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head && *head)
	{
		while (*head != NULL)
		{
			tmp = (*head)->next;
			free(*head);
			*head = tmp;
		}
	}
}

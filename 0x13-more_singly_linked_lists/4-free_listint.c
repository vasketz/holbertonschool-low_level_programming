#include "lists.h"
/**
 * free_listint - free allocated memory
 * @head: pointer
 * Void.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

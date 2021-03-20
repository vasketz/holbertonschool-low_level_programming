#include "lists.h"
/**
 * free_list - free allocated memory
 * @head: pointer
 * Void.
 */
void free_list(list_t *head)
{
	while (head)
	{
		list_t *tmp = head;

		head = head->next;
		if (tmp->str != NULL)
		{
			free(tmp->str);
		}
		free(tmp);
	}
}

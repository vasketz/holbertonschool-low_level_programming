#include "lists.h"
/**
 * get_nodeint_at_index - Get the nodeint at index object
 * @head: pointer variable
 * @index: unsigned int
 * Return: tmp
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;

	if (head == NULL)
	{
		return (0);
	}

	while (index > 0)
	{
		if (tmp == NULL)
		{
			return (0);
		}
		tmp = tmp->next;
		index--;
	}
	return (tmp);
}

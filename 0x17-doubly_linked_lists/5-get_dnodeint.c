#include "lists.h"
/**
 * get_dnodeint_at_index - return nth node
 * @head: pointer
 * @index: int
 * Return: tmp in node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp = head;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (i < index)
	{
		if (tmp)
		{
			tmp = tmp->next;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (tmp);
}

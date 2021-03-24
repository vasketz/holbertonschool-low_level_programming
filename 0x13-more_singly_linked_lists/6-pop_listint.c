#include "lists.h"
/**
 * pop_listint - delete a node return node
 * @head: pointer
 * Return: res
 */
int pop_listint(listint_t **head)
{
	int res;

	if (head && *head)
	{
		listint_t *tmp = *head;

		res = tmp->n;
		(*head) = (*head)->next;
		free(tmp);
	}
	return (res);
}

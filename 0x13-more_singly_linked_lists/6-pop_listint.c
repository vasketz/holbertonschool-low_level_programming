#include "lists.h"
/**
 * pop_listint - delete a node return node
 * @head: pointer
 * Return: res
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp = *head;
	int res = tmp->n;

	if (head && *head)
	{
		(*head) = (*head)->next;
		free(tmp);
	}
	return (res);
}

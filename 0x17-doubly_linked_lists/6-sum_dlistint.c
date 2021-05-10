#include "lists.h"
/**
 * sum_dlistint - return de sum of nodes
 * @head: pointer
 * Return: add of nodes
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = head;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (tmp)
	{
		sum = tmp->n + sum;
		tmp = tmp->next;
	}
	return (sum);
}

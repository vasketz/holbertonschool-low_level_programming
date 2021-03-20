#include "lists.h"
/**
 * add_node_end - create a new node at the end
 * @head: double pointer
 * @str: pointer string
 * Return: list
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (*head == NULL)
	{

		*head = new;
		new->str = strdup(str);
		new->len = _strlen_recursion(str);
		new->next = NULL;
		return (*head);
	}
	else
	{
		list_t *last = *head;

		while (last->next != NULL)
		{
			last = last->next;
		}
			last->next = new;
			new->str = strdup(str);
			new->len = _strlen_recursion(str);
			new->next = NULL;
			return (last);
	}
}
/**
 *_strlen_recursion - the length of string
 *@s: pointer variable
 * Return: int
 */
int _strlen_recursion(const char *s)
{
	if (s[0] == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

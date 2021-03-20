#include "lists.h"
/**
 * add_node - add a new node
 * @head: a double pointer variable
 * @str: is a pointer variable
 * Return: the pointer head
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = _strlen_recursion(str);
	new->next = *head;
	*head = new;

	return (*head);
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

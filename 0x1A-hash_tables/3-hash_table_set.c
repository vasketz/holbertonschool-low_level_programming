#include "hash_tables.h"
/**
 * hash_table_set - add a new table in array
 * @ht: header of hash table
 * @key: string key
 * @value: value to add in key
 * Return: 1 on success
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *new = NULL, *tmp = NULL;

	if (ht == NULL || key == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	new->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		ht->array[index] = new;
		new->next = NULL;
		return (1);
	}
	else
	{
		tmp = ht->array[index];
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	return (0);
}

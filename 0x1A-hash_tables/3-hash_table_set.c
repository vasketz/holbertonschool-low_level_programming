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
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new = NULL;

	if (strcmp(key, "") == 0 || ht == NULL)
		return (0);
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
		new->next = ht->array[index];
		ht->array[index] = new;
		return (1);
	}
	return (0);
}

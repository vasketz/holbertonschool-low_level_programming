#include "hash_tables.h"
/**
 * hash_table_get - get the value from key
 * @ht: header of hash table
 * @key: string
 * Return: value on success
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = key_index((const unsigned char *)key, ht->size);
	hash_node_t *new = ht->array[index];

	while (new != NULL)
	{
		if (strcmp(new->key, key))
		{
			new = new->next;
		}
		return (new->value);
	}
	return (NULL);
}

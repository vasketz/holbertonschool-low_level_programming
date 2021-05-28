#include "hash_tables.h"
/**
 * key_index - obtain the key at index
 * @key: key in array
 * @size: size in array
 * Return: position of key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = hash_djb2(key);
	unsigned long int pos = index % size;

	return (pos);
}

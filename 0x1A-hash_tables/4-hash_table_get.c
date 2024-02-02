#include "hash_tables.h"

/**
 * hash_table_get - retrieves value associated with a key
 * @ht: is hash table we look into
 * @key: key we are looking for
 * Return: value associated  element, else NULL
**/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *nodo;
	unsigned long int index;

	if (key == NULL || ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	nodo = ht->array[index];

	for (; nodo != NULL; nodo = nodo->next)
	{
		if (strcmp(nodo->key, key) == 0)
			return (nodo->value);
	}

	return (NULL);
}

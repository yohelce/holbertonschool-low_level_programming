#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key of the value to retrieve
 *
 * Return: the value associated with the element,
 * or NULL if key couldn’t be found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *hash_node;

	if (!ht || !key || !strcmp(key, ""))
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[index];

	while (hash_node)
	{
		if (!strcmp(hash_node->key, key))
			return (hash_node->value);
		hash_node = hash_node->next;
	}

	return (NULL);
}

#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the hash table
 * @ht: hash table to add the element to
 * @key: key of the element, will give the index in the array
 * @value: value associated with the key
 *
 * Return: 1 if is SUCCESS or 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = 0;
	hash_node_t *hash_node = NULL, *temp = NULL;

	if (!ht || !key || !value || !ht->array || strlen(key) == 0)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	hash_node = ht->array[i];

	if (!hash_node)
	{
		hash_node = malloc(sizeof(hash_node_t));
        	if (hash_node == NULL)
                	return (0);
		hash_node->key = strdup(key);
		hash_node->value = strdup(value);
		hash_node->next = NULL;
		ht->array[index] = hash_node;
		return (1);
	}
	else:
	{
		hash_node = malloc(sizeof(hash_node_t));
                if (hash_node == NULL)
                        return (0);
                hash_node->key = strdup(key);
                hash_node->value = strdup(value);
		hash_node->next = hash_node;
		ht->array[index] = hash_node;
		return (1);
	}

	temp = ht->array[index];
	while (temp)
	{
		if (!strcmp(temp->key, key))
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}
		temp = temp->next;
	}
}

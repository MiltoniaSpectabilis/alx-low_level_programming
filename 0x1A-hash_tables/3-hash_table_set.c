#include "hash_tables.h"
#include <stdio.h>



/**
 * hash_table_set - Adds an element to the hash table
 * @ht: A pointer to the hash table
 * @key: The key
 * @value: The value associated with the key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node = NULL;
	hash_node_t *current = NULL;

	if (!ht || !key)
		return (0);

	current = hash_djb2(key) % ht->size;

	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);

	new_node->key = key;
	if (!new_node->key)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (!new_node->value)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[current];
	ht->array[current] = new_node;

	return (1);
}

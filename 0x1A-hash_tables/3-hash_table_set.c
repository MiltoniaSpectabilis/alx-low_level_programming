#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 * @ht: The hash table.
 * @key: The key (cannot be empty).
 * @value: The value associated with the key (must be duplicated).
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
    unsigned long int index;
    hash_node_t *new_node, *current;

    if (!ht || !key || !*key || !value)
        return (0);  /* Simplified NULL and empty key checks */

    index = key_index((const unsigned char *)key, ht->size);
    current = ht->array[index];

    /* Check if the key already exists */
    while (current)
    {
        if (strcmp(current->key, key) == 0)
        {
            free(current->value);
            current->value = strdup(value);
            return (1);
        }
        current = current->next;
    }

   /* Key doesn't exist, create a new node */
    new_node = malloc(sizeof(hash_node_t));
    if (!new_node)
        return (0);

    new_node->key = strdup(key);
    new_node->value = strdup(value);
    new_node->next = ht->array[index];  /* Insert at the beginning */
	ht->array[index] = new_node;

    return (1);
}

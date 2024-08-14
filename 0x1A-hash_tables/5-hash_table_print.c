#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 * @ht: The hash table.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current;
	int comma_flag = 0; /* Flag to track comma insertion */

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (comma_flag)
				printf(", ");
			/* Print the key-value pair */
			printf("'%s': '%s'", current->key, current->value);
			comma_flag = 1; /* Set flag after printing the first pair */
			current = current->next;
		}
	}
	printf("}\n");
}

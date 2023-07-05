#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at index index
 * of a listint_t linked list.
 * @head: A pointer to a pointer to the head of the listint_t list.
 * @index: The index of the node to be deleted.
 *
 * Return: 1 if deletion succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;
	listint_t *prev = NULL;


	if (*head == NULL)
		return (-1);
	
	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index; i++)
	{
		prev = current;
		current = current->next;

		if (current == NULL)
			return (-1);
	}

	prev->next = current->next;
	free(current);

	return (1);
}

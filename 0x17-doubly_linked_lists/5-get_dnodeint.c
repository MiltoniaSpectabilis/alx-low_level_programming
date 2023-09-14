#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 * @index: The index of the node to retrieve, starting from 0.
 *
 * Return: A pointer to the nth node of the dlistint_t list,
 * or NULL if it does not exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;
	dlistint_t *temp = head;

	for (i = 0; temp != NULL && i < index; i++)
		temp = temp->next;

	return (temp == NULL || i < index ? NULL : temp);
}


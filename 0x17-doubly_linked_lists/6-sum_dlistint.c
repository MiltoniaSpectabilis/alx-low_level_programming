#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * 		  of a dlistint_t linked list.
 * @head: A pointer to the head of the dlistint_t list.
 *
 * Return: The sum of all the data (n) of the dlistint_t list,
 * 	   or 0 if it is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp = head;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

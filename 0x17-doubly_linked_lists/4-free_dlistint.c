#include "lists.h"

/**
 * free_dlistint - A function that frees a dlistint_t list
 * @head: A pointer to list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head;
		head = head->next;
		free(current);
	}
}

#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: Head of the node
 * Return: 0, then NULL when it fails
 */

void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}


#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: Head of the node
 * Return: 0 (Success)
 */

void free_listint2(listint_t **head)
{
	listint_t *eject;

	if (head == NULL)
		return;
	while (*head != NULL)
	{
		eject = (*head)->next;
		free(*head);
		*head = eject;
	}
}


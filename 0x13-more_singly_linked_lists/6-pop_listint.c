#include "lists.h"

/**
 * pop_listint - a function that deletes the head
 * node of a listint_t linked list.
 * @head: Head of the node
 * Return: the head node’s data (n).
 */

int pop_listint(listint_t **head)
{
	listint_t *poptask;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	poptask = *head;
	*head = poptask->next;
	n = poptask->n;
	free(poptask);
	return (n);
}

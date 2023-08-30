#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: The head of the node
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
	listint_t *before, *after;

	if (head == NULL) || *head == NULL)
		return (NULL);
	if ((*head)->after == NULL)
		return (*head)
	before = NULL;
	while (*head != NULL)
		{
			after = (*head)->next;
			(*head)->next = before;
			before = *head;
			*head = next;
		}
	*head = before;
	return (*head);

#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: The head of the node
 * Return: A pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
	listint_t *bef;
	listint_t *nex;

	if (head == NULL || *head == NULL)
		return (NULL);
	if ((*head)->next == NULL)
		return (*head)
	precede = NULL;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = precede;
		precede = *head;
		*head = next;
	}
	*head = precede;
	return (*head);

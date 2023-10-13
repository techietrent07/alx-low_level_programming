#include "lists.h"

/**
 * sum_dlistint - A function that returns the sum of all
 * the data(n) of a dlistint_t linked list
 * @head: A pointer to head of list
 * Return: sum of all data or 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}

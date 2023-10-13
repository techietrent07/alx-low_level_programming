#include "lists.h"

/**
 * dlistint_len - A function that
 * returns the number of elements in linked list
 * @h: points to head of the linked list
 * Return: the number of elements in the linked list.
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *current = h;
	int d = 0;

	while (current)
	{
		d++;
		current = current->next;
	}

	return (d);
}

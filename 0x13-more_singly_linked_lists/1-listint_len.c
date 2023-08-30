#include "lists.h"

/**
 * listint_len - A function that returns the
 * number of elements in a linked listint_t list.
 * @h: The node head
 * Return: The length of the node
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}



#include "lists.h"

/**
 * get_dnodeint_at_index - A function that returns the nth
 * node of a dlistint_t linked list
 * @head: A pointer to head of list
 * @index: nth node check
 * Return: value at nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	current = head;
	for (i = 0; i <= index; i++)
	{
		if (!current)
		{
			return (NULL);
		}
		if (index == 0)
		{
			return (current);
		}
		if (i > 0)
		{
			current = current->next;
		}
	}
	return (current);
}

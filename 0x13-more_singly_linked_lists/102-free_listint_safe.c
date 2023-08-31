#include "lists.h"

/**
 * free_listint_safe - a function that frees a listint_t list.
 * @h: Pointer to the first node
 *
 * Return: The size of the list that was free’d
 */

size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	int free_test;
	listint_t *tmp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		free_test = *h - (*h)->next;
		if (free_test > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			len++;
		}
		else
		{
			free(*h);
			*h = NULL;
			len++;
			break;
		}
	}
	*h = NULL;

	return (len);
}

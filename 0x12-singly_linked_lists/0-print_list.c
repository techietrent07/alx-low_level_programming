#include "lists.h"

/**
 * print_list - A function that prints all the elements
 * @h: A pointer to list_t to print
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		elements++;
	}

	return (elements);
}

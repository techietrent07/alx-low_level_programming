#include "lists.h"

/**
 * print_list - A function that prints all the elements of a linked list
 * @h: A pointer to list_t to print
 * Return: The number of nodes printed
 */

size_t print_list(const list_t *h)
{
	size_t z;
       
	z = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		z++;
	}

	return (z);
}

#include "lists.h"

/**
 * add_node_end - a function that adds a new node
 * at the end of a list_t list.
 * @head: The head of the list_t list
 * @str: The string to store in list_t
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add, *node_end;
	size_t siz;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (siz = 0; str[siz]; siz++)
		;

	add->len = siz;
	add->next = NULL;
	node_end = *head;

	if (node_end == NULL)
	{
		*head = add;
	}
	else
	{
		while
			(node_end->next != NULL)
				node_end = node_end->next;
		node_end->next = add;
	}

	return (*head);
}

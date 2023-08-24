#include "lists.h"

/**
 * add_node - a function that adds a
 * new node at the beginning of a list_t list.
 * @head: The head of the list_t list
 * @str: String to store in list_t list
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *add;
	size_t siz;

	add = malloc(sizeof(list_t));

	if (add == NULL)
		return (NULL);

	add->str = strdup(str);

	for (siz = 0; str[siz]; siz++)
		;

	add->len = siz;
	add->next = *head;
	*head = add;

	return (*head);
}

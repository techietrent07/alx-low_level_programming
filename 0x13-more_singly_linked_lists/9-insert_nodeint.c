#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a
 * new node at a given position.
 * @head: The head of the node
 * @idx: The index of the node
 * @n: The value of the new node
 * Return: The address of the new node, or null if it fails
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp, *newnode;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		tmp = *head;
		for (i = 0; i < idx - 1 && tmp != NULL; i++)
		{
			tmp = tmp->next;
		}
		if (tmp == NULL)
			return (NULL);
	}
	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (newnode);
	}
	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}



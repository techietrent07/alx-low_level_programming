#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - A function that counts the
 * number of unique nodes in a looped listint_t linked list.
 * @head: The head of the node
 * Return: If the list is not looped = 0, otherwise the
 * number of unique nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *ptr, *pointer;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	ptr = head->next;
	pointer = (head->next)->next;

	while (pointer)
	{
		if (ptr == pointer)
		{
			ptr = head;
			while (ptr != pointer)
			{
				nodes++;
				ptr = ptr->next;
				pointer = pointer->next;
			}
			ptr = ptr->next;
			while (ptr != pointer)
			{
				nodes++;
				ptr = ptr->next;
			}
			return (nodes);
		}
		ptr = ptr->next;
		pointer = (pointer->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - A function that prints a listint_t list safely
 * @head: The head of the node
 * Return: The number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes = 0, i = 0;

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (i = 0; i < nodes; i++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}

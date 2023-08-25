#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 * @head: The head of list_t
 * Return: 0
 */

void free_list(list_t *head)
{
	list_t *release;

	while
		((release = head) != NULL)
		{
			head = head->next;
			free(release->str);
			free(release);
		}
}


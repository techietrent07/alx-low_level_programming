#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: The head of node
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *yes = head;
	listint_t *no = head;

	if (!head)
		return (NULL);

	while (yes && no && no->next)
	{
		no = no->next->next;
		yes = yes->next;
		if (no == yes)
		{
			yes = head;
			while (yes != no)
			{
				yes = yes->next;
				no = no->next;
			}
			return (no);
		}
	}
	return (NULL);
}

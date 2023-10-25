#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *current = head;
	listint_t *marker = head;

	if (!head)
	return (NULL);

	while (current && current->next)
	{
	current = current->next->next;
	marker = marker->next;

	if (current == marker)
	{
	current = head;

	while (current != marker)
	{
	current = current->next;
	marker = marker->next;
	}

	return (current);
	}
	}

	return (NULL);
}

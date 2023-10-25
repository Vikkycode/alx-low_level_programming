#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: number of elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;
	listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	len++;

	if ((void *)temp <= (void *)*h)
	{
	free(*h);
	*h = NULL;
	break;
	}
	}

	*h = NULL;

	return (len);
}


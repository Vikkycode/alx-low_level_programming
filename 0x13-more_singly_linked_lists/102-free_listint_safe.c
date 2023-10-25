#include "lists.h"

/**
 * free_listint_safe - free a linked 
 * @h: pointer to the first node 
 *
 * Return: elements number
 */
size_t free_listint_safe(listint_t **h)
{
 size_t length = 0;
 int different;
 listint_t *temp;

	if (!h || !*h)
	return (0);

	while (*h)
	{
	different = *h - (*h)->next;
	if (different > 0)
	{
	temp = (*h)->next;
	free(*h);
	*h = temp;
	length++;
	}
	else
	{
	free(*h);
	*h = NULL;
	length++;
	break;
	}
	}

	*h = NULL;

	return (length);
}


#include "lists.h"
/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list pointer to a head
 * Return: NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *slow = head;
	listint_t *fast = head;
	int loop_found = 0;

	while (fast && fast->next)
	{
	slow = slow->next;
	fast = fast->next->next;
	if (slow == fast)
	{
	loop_found = 1;
	break;
	}
	}

	if (!loop_found)
	return (NULL);

	slow = head;
	while (slow != fast)
	{
	slow = slow->next;
	fast = fast->next;
	}

	return (fast);
}


#include "lists.h"
/**
 * sum_dlistint - sums the data of all the nodes in a linked list.
 * @head: list's head.
 * Return: the sum of the data of all the nodes.
 */
int sum_dlistint(dlistint_t *head)
{
	int r = 0;

	if (!head)
		return (0);

	while (head)
	{
		r += head->n;
		head = head->next;
	}
	return (r);
}

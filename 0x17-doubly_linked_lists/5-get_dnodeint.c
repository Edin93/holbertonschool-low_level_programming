#include "lists.h"
/**
 * get_dnodeint_at_index - get node at nth position.
 * @head: linked list's head.
 * @index: position of the node to look for.
 * Return: the found node, else NULL.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}

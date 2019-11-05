#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a listint_t list.
 * @head: list head.
 * @index: the index of the node, starting from 0.
 * if node doesn't exists, return NULL.
 * Return: the nth node, if node doesn't exist return NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *p;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	p = head;
	while (p != NULL && i != index)
	{
		p = p->next;
		i++;
		if (p == NULL)
			return (NULL);
	}
	return (p);
}

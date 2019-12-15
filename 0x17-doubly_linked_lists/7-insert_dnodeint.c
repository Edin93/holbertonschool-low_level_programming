#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node at index in a DLL (index starts at 0)
 * @h: DLL's address head.
 * @idx: position at which the new node will be inserted.
 * @n: data of the new node.
 * Return: address of the new node.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *head = *h;

	if (h == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (head)
	{
		if (i == idx)
		{
			if (head->prev)
			{
				head = head->prev;
				new->next = head->next;
				(head->next)->prev = new;
				head->next = new;
				return (new);
			}
			else
			{
				new->next = head;
				new->prev = NULL;
				head->prev = new;
				*h = new;
				return (new);
			}
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

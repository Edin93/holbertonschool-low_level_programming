#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a doubly linked list.
 * @h: list head
 * Return: number of elements.
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
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
	size_t len;

	if (h != NULL && idx == 0)
		return (add_dnodeint(h, n));

	len = dlistint_len(head);
	if (len == idx)
		return (add_dnodeint_end(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	while (head)
	{
		if (i == idx)
		{
			(head->prev)->next = new;
			new->prev = head->prev;
			new->next = head;
			head->prev = new;
			return (new);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

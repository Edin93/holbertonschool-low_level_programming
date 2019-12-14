#include "lists.h"
/**
 * add_dnodeint_end - add a new node at the end of a dlistint_t.
 * @head: address of linked list head.
 * @n: data of the new node to insert.
 * Return: address of the new node, NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *h;

	h = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (h == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		while (h->next != NULL)
			h = h->next;
		new->prev = h;
		h->next = new;
	}
	return (new);
}

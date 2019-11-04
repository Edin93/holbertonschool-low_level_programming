#include "lists.h"
/**
 * add_nodeint_end - append new node int listint_t list.
 * @head: list head address.
 * @n: int of the new node to add.
 * Return: address of new node, NULL if failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *p;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = NULL;
	p = *head;
	if (p != NULL)
	{
		while (p->next != NULL)
			p = p->next;
		p->next = new;
		return (new);
	}
	*head = new;
	return (new);
}

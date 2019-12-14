#include "lists.h"
/**
 * free_dlistint - free a doubly linked list (dlistint_t).
 * @head: list's head.
 * Return: nothing.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;

	while (head != NULL)
	{
		h = head;
		free(head);
		head = h->next;
	}
}

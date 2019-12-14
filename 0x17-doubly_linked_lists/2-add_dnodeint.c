#include "lists.h"
/**
 * add_dnodeint - add node at beginning of a doubly linked list
 * @head: address of linked list head.
 * @n: value of n of the new node to add.
 * Return: address of the new element, NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = NULL;
	if (*head != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}

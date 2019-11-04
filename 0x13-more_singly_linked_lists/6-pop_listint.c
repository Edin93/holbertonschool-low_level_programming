#include "lists.h"
/**
 * pop_listint - deletes the head node of listint_t list & returns the head
 * node's data(n).
 * @head: list's head node.
 * Return: the head node's data(n), 0 if list is empty.
 */
int pop_listint(listint_t **head)
{
	listint_t *new;
	int x;

	if (*head == NULL)
		return (0);
	new = (*head)->next;
	x = (*head)->n;
	free(*head);
	*head = new;
	return (x);
}

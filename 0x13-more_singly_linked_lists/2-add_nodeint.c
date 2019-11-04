#include "lists.h"
/**
 * add_nodeint - prepend a new node in a listint_t list.
 * @head: address of the head.
 * @n: value of the new node.
 * Return: address of the new node, or NULL if failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}

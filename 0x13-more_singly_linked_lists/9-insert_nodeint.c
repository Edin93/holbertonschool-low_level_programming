#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at given position.
 * @head: list head.
 * @idx: index where to insert new node.
 * @n: n of the new node to be inserted.
 * Return: address of new node, NULL if failed.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *p;
	listint_t *new;
	unsigned int i = 0;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	p = *head;
	new->n = n;
	if (idx == 0)
	{
		listint_t *temp;

		temp = *head;
		new->next = temp;
		*head = new;
		return (new);
	}
	if (p == NULL)
		return (NULL);
	while (p != NULL && i + 1 < idx)
	{
		i++;
		p = p->next;
	}
	new->next = p->next;
	p->next = new;
	return (new);
}

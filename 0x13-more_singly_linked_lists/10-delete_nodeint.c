#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index of a listint_t list.
 * @head: address of list head.
 * @index: index of node to delete.
 * Return: 1 if succeeded, 0 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *p, *temp;

	if (head == NULL)
		return (-1);

	p = *head;
	if (p != NULL && index == 0)
	{
		*head = p->next;
		free(p);
		return (1);
	}
	while (p != NULL)
	{
		if (i == index)
			break;
		temp = p;
		if (i != index && p->next != NULL)
		{
			p = p->next;
		}
		i++;
	}
	temp->next = p->next;
	free(p);
	return (1);
}

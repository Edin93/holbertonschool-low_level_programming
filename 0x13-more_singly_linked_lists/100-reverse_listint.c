#include "lists.h"
/**
 * reverse_listint - reverses a listint_t list.
 * @head: address of list head.
 * Return: pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *p;
	listint_t *tmp = NULL;

	if (head == NULL)
		return (NULL);
	while (*head != NULL)
	{
		p = *head;
		*head = p->next;
		p->next = tmp;
		tmp = p;
	}
	*head = tmp;
	return (*head);
}

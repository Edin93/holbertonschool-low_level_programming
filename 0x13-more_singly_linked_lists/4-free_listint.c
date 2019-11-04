#include "lists.h"
/**
 * free_listint - frees a listint_t list.
 * @head: list head.
 */
void free_listint(listint_t *head)
{
	listint_t *new = NULL;

	while (head != NULL)
	{
		new = head->next;
		free(head);
		head = new;
	}
}

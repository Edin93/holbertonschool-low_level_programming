#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: list head.
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *newHead = head->next;
		free(head);
		head = newHead;
	}
}

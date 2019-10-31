#include "lists.h"
/**
 * free_list - frees a list_t list.
 * @head: list head.
 */
void free_list(list_t *head)
{
	list_t *newHead = NULL;

	while (head != NULL)
	{
		newHead = head->next;
		free(head->str);
		free(head);
		head = newHead;
	}
}

#include "lists.h"
/**
 * sum_listint - returns the sum of all the data of listint_t list.
 * @head: list head.
 * Return: sum of all data, 0 if list is empty.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *p;

	if (head == NULL)
		return (0);
	p = head;
	while (p != NULL)
	{
		sum += p->n;
		p = p->next;
	}
	return (sum);
}

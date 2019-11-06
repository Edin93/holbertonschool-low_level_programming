#include "lists.h"
/**
 * print_listint_safe - prints a listint_t list.
 * @head: list head.
 * Return: number of list nodes.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	int is_loop = 0;
	const listint_t *sp = head;
	const listint_t *fp = head;
	const listint_t *p = head;
	const listint_t *tmp = head;

	if (head == NULL)
		exit(98);

	while (sp != NULL && fp != NULL && fp->next != NULL)
	{
		sp = sp->next;
		fp = fp->next->next;
		if (sp == fp)
		{
			tmp = sp->next->next;
			is_loop = 1;
			break;
		}
	}
	if (is_loop == 1)
	{
		sp->next->next = NULL;
	}
	while (p != NULL)
	{
		printf("%d\n", p->n);
		p = p->next;
		count++;
	}
	if (is_loop == 1)
		printf("-> [%p] %d\n", (void *)tmp, tmp->n);
	return (count);
}

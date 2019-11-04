#include "lists.h"
/**
 * print_listint - prints all elements of listint_t list.
 * @h: list address
 * Return: number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *p = h;

	while (p != NULL)
	{
		printf("%d\n", p->n);
		count++;
		p = p->next;
	}
	return (count);
}

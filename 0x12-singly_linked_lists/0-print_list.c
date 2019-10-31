#include "lists.h"
/**
 * print_list - prints all elements of a single linked list, list_t.
 * @h: pointer to first node of the list.
 * Return: number of the list nodes.
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;
	char *str;

	while (h != NULL)
	{
		str = h->str;
		if (str == NULL)
		{
			printf("[0] (nil)\n");
			s++;
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
			s++;
		}
		h = h->next;
	}
	return (s);
}

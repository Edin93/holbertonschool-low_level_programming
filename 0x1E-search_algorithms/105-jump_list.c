#include "search_algos.h"
#include <math.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using
 * the jump search algorithm.
 * @list: a pointer to the head of the list to search in.
 * @size: the number of nodes in a list.
 * @value: the value to search for.
 * Return:  a pointer to the first node where value is located, otherwise -1.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	int i, j, step, sz;
	listint_t *prev, *next;

	if (list == NULL)
		return (NULL);
	sz = (int)size;
	step = sqrt(sz);
	prev = list;
	next = prev;
	for (i = step; i < sz; i += step)
	{
		prev = next;
		for (j = 0; j <= step && next != NULL; j++)
			next = next->next;
		printf("Value checked at index [%d] = [%d]", i, next->n);
		if (next->n >= value || next == NULL)
		{
			printf("Value found between indexes [%d] and [%d]",
			       i - step, i);
			for (j = i; j <= step + i && next != NULL; j++)
			{
				printf("Value checked at index [%d] = [%d]",
				       i, next->n);
				next = next->next;
				if (next->n == value)
					return (next);
			}
		}
	}
	return (NULL);
}

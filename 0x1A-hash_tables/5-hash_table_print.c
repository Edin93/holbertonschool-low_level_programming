#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table content.
 * @ht: hash table to be printed.
 * Return: nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *tmp, *node;
	unsigned long int i = 0, limit = 0;

	if (!ht)
		return;
	while (i < ht->size)
	{
		if (ht->array[i])
			limit = i;
		i++;
	}
	i = 0;
	printf("{");
	while (i < ht->size)
	{
		tmp = ht->array[i];
		if (tmp)
		{
			node = tmp;
			while (node)
			{
				printf("'%s': '%s'", node->key, node->value);
				if (i != limit)
					printf(", ");
				node = node->next;
			}
		}
		i++;
	}
	printf("}");
	printf("\n");
}

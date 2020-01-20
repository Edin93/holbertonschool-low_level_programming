#include "hash_tables.h"

/**
 * hash_table_delete - function to delete a hash table.
 * @ht: hash table address to delete.
 * Return: nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *lh, *node, *next;

	if (!ht)
		return;

	while (i < ht->size)
	{
		lh = ht->array[i];
		if (lh)
		{
			node = lh;
			while (node)
			{
				next = node->next;
				free(node->key);
				free(node->value);
				free(node);
				node = next;
			}
		}
		i++;
	}
	free(ht->array);
	free(ht);
}

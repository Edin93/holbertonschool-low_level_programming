#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_table_create - creates a hash table.
 * @size: the size of the array.
 * Return: a pointed to the newly created hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	hash_node_t *arr = NULL;

	if (size <= 0)
		return (NULL);

	ht = (hash_table_t *)malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	arr = (hash_node_t *)malloc(size * sizeof(hash_node_t));
	if (arr == NULL)
		return (NULL);
	ht->size = size;
	ht->array = &arr;
	return (ht);
}

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

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	arr = malloc(sizeof(hash_node_t) * size);
	if (arr == NULL)
		return (NULL);
	ht->size = size;
	ht->array = &arr;
	return (ht);
}
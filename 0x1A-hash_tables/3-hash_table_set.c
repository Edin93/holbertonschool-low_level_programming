#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * len - calculates length of a string.
 * @str: pointer to char to calculate its length.
 * Return: length of a given string.
 */
int len(const char *str)
{
	int i = 0;

	while (str[i])
		i++;
	return (i);
}

/**
 * hash_table_set - function that adds an element to the hash table.
 * @ht: hash table to add element to.
 * @key: key of new element.
 * @value: value associated with key, might be empty string.
 * Return: 1 on success, 0 otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *node, *list_h, **arr;
	char *k = NULL, *v = NULL;
	unsigned long int index, size;

	arr = (ht)->array;
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	k = malloc(sizeof(char) * len(key));
	if (k == NULL)
		return (0);
	v = malloc(sizeof(char) * len(value));
	if (v == NULL)
		return (0);
	node->key = k;
	node->value = v;
	list_h = arr[index];
	if (list_h == NULL)
	{
		node->next = NULL;
		list_h = node;
	}
	else
	{
		node->next = list_h;
		list_h = node;
	}
	return (1);
}

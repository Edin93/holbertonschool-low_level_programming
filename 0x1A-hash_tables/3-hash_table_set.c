#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	hash_node_t *node, *list_h, **arr, *tmp;
	char *k = NULL, *v = NULL;
	unsigned long int index, size;

	if (!ht || !key || !value || strlen(key) == 0 || !(ht->array))
		return (0);
	arr = (ht)->array;
	size = ht->size;
	index = key_index((unsigned char *)key, size);
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	k = strdup(key);
	v = strdup(value);
	node->key = k;
	node->value = v;
	list_h = arr[index];
	if (list_h == NULL)
	{
		node->next = NULL;
		ht->array[index] = node;
	}
	else
	{
		tmp = list_h;
		while (tmp)
		{
			if (strcmp(tmp->key, k) == 0)
			{
				free(tmp->value), free(node), free(k);
				tmp->value = v;
				return (1);
			}
			tmp = tmp->next;
		}
		node->next = list_h;
		ht->array[index] = node;
	}
	return (1);
}

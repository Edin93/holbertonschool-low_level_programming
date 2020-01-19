#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * key_index - function that returns the index of a given key.
 * @key: key of node.
 * @size: size of the array of the hash table.
 * Return: the index at which the key/value pair is stored in hash table'array.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash, index;

	hash = hash_djb2(key);
	index = hash % size;
	return (index);
}

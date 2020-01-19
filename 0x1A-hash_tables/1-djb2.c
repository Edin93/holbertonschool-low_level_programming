#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * hash_djb2 - hash function implementing the djb2 algorithm.
 * @str: string value of the new node to insert.
 * Return: hashed value of string as an unsigned long int.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}

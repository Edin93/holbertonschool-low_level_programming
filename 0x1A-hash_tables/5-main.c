#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;

/*
	ht = hash_table_create(1024);
	hash_table_print(ht);
	hash_table_set(ht, "c", "fun");
	hash_table_set(ht, "python", "awesome");
	hash_table_set(ht, "Jennie", "and Jay love asm");
	hash_table_set(ht, "N", "queens");
	hash_table_set(ht, "Asterix", "Obelix");
	hash_table_set(ht, "Betty", "Holberton");
	hash_table_set(ht, "98", "Battery Street");
*/
	ht = hash_table_create(30);
	hash_table_set(ht, "USA", "Washington");
	hash_table_set(ht, "France", "Paris");
	hash_table_set(ht, "UK", "London");
	hash_table_set(ht, "Spain", "Madrid");
	hash_table_set(ht, "Germany", "Berlin");
	hash_table_set(ht, "China", "Beijing");
	hash_table_set(ht, "Russia", "Moscow");
	hash_table_set(ht, "Bahrain", "Manama");
	hash_table_set(ht, "Canada", "Ottawa");
	hash_table_set(ht, "Brazil", "Brasilia");
	hash_table_set(ht, "Sweden", "Stockholm");
	hash_table_set(ht, "Iceland", "Reykjavik");
	hash_table_set(ht, "Japan", "Tokyo");
	hash_table_set(ht, "Australia", "Canberra");


	hash_table_print(ht);
	return (EXIT_SUCCESS);
}

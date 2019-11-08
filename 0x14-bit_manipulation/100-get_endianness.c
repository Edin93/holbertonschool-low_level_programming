#include "holberton.h"
/**
 * get_endianness - checks the endianness.
 * Return: 0 if big endian, 1 if little endian.
 */
int get_endianness(void)
{
	int a = 1;
	int *p = &a;

	if ((*p >> 24) & 1)
		return (1); /* little endian */
	return (0); /* big endian */
}

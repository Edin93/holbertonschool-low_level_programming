#include "holberton.h"
/**
 * clear_bit - sets the value of a bit 0 at position index.
 * @n: number.
 * @index: bit position to set to 0.
 * Return: 1 if it worked, -1 if an error occurs.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	/* unsigned long int a = 1 << index; */

	if (index > 31)
		return (-1);
	/* *n &= ~(a); */
	if ((*n >> index) & 1)
		*n = *n - (1 << index);
	return (1);
}

#include "holberton.h"
/**
 * set_bit - sets the value of bit to 1 at position index.
 * @n: number.
 * @index: bit to set to 1's position.
 * Return: 1 if it worked, -1 if an error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);
	*n += 1 << index;
	return (1);
}

#include "holberton.h"
/**
 * get_bit - returns the value of a bit at a given index.
 * @n: number.
 * @index: index of the bit to return.
 * Return: value of the bit at position index.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 31)
		return (-1);
	if ((n >> index) & 1)
		return (1);
	else
		return (0);
}

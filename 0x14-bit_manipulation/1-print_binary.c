#include "holberton.h"
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert to binary.
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0' + 0);
	while (n != 0)
	{
		if (n & 1)
			_putchar('1' + 0);
		else
			_putchar('0' + 0);
		n = n >> 1;
	}
}

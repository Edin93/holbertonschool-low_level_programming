#include "holberton.h"
/**
 * show - prints the binary representation of a number.
 * @n: number to convert to binary.
 */
void show(unsigned long int n)
{
	if (n != 0)
	{
		show(n >> 1);
		if (n & 1)
			_putchar('1' + 0);
		if (!(n & 1))
			_putchar('0' + 0);

	}
}
/**
 * print_binary - prints the binary representation of a number.
 * @n: number to convert to binary.
 */
void print_binary(unsigned long int n)
{
	if (n != 0)
		show(n);
	else
		_putchar('0' + 0);
}

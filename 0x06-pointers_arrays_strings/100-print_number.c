#include "holberton.h"
/**
 * print_number - print numbers
 * @n: integer
 */
void print_number(int n)
{
	unsigned int div = 1;

	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	while (n / div >= 10)
	{
		div *= 10;
	}
	for (; div >= 1; div /= 10)
	{
		_putchar(n / div + '0');
		n = n % div;
	}
}

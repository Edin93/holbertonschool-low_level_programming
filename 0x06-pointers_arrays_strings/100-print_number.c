#include "holberton.h"
/**
 * print_number - print numbers
 * @n: integer
 */
void print_number(int n)
{
	int div = 1;
	int f;
	int num;
	int bigger_than_10 = 0;

	f = n % 10;
	n = n / 10;

	if (n < 0)
	{
		n *= -1;
		f *= -1;
		_putchar('-');
	}
	if (n >= 1)
	{
		bigger_than_10 = 1;
	}
	num = n;
	while (num / (div * 10) >= 1)
	{
		div *= 10;
	}
	for (; div >= 1; div /= 10)
	{
		_putchar(n / div + '0');
		n = n % 10;
	}
	if (bigger_than_10 == 1)
	{
		_putchar(f + '0');
	}
}

#include "holberton.h"
#include <stdio.h>
/**
 * print_number - print numbers
 * @n: integer
 */
void print_number(int n)
{
	int limit;
	int dividor = 1;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		while (n / dividor >= 10)
			dividor = dividor * 10;
		limit = dividor;

		while (limit >= 1)
		{
			_putchar(n / limit + '0');
			n = n  % limit;
			limit = limit / 10;
		}
	}
}

#include "holberton.h"
/**
 * print_number - print numbers
 * @n: integer
 */
void print_number(int n)
{
	int limit;
	int a;
	int dividor = 1;

	a = n % 10;
	if (n < 0)
	{
		n = -n;
		a = -a;
		_putchar('-');
	}
	if (n < 10)
	{
		_putchar(n + '0');
	}
	else
	{
		n = n / 10;
		while (n / dividor >= 10)
			dividor = dividor * 10;
		limit = dividor;

		while (limit >= 1)
		{
			_putchar(n / limit + '0');
			n = n  % limit;
			limit = limit / 10;
		}
		_putchar(a + '0');
	}
}

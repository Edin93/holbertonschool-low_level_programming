#include "holberton.h"
/**
 * jack_bauer - print all day minutes.
 * display - display hours or minutes.
 * @n: type integer.
 */
void display(int n);
void jack_bauer(void)
{
	int i;
	int j;

	for (i = 0; i < 24; i++)
	{
		for (j = 0; j < 60; j++)
		{
			display(i);
			_putchar(':');
			display(j);
			_putchar('\n');
		}
	}
}

void display(int n)
{
	_putchar(n / 10 + '0');
	_putchar(n % 10 + '0');
}

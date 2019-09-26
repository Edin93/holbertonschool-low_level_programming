#include "holberton.h"
/**
 * print_line - print line with given length.
 * @n: line length
 */
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		while (i < n)
		{
			_putchar('_');
			i++;
		}
	}
	_putchar('\n');
}

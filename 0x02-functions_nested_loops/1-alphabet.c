#include "holberton.h"
/**
 * print_alphabet -  print alphabets.
 * returns nothing.
 */
void print_alphabet(void)
{
	char i = 'a';

	for (; i <= 'z'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}

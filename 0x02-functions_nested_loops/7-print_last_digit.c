#include "holberton.h"
/**
 * print_last_digit - prints last digit of integer.
 * @a: type integer.
 *Return: the value of the last digit.
 */

int print_last_digit(int a)
{
	int r = a % 10;

	if (r < 0)
	{
		_putchar(r * -1 + '0');
		return (r * -1);
	}
	else
	{
		_putchar(r + '0');
		return (r);
	}
}

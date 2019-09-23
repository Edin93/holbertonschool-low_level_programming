#include "holberton.h"
/**
 * print_sign - prints the sign of a number.
 * @c: parameter type int
 * Return: 0 if the parameter is not a letter, lowercase or uppercase
 **/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

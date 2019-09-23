#include "holberton.h"
/**
  4   * print_sign - prints the sign of a number.
  5   * @c: parameter type int
  6   * Return: 0 if the parameter is not a letter, lowercase or uppercase
  7 **/
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

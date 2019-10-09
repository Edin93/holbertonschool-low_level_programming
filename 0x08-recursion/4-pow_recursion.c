#include "holberton.h"
/**
 * _pow_recursion - return x to power of y
 * @x: base.
 * @y: power.
 * Return: x ** y.
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (_pow_recursion(x, y - 1) * x);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
		return (1);
}

#include "holberton.h"
int calc_sq(int x, int n);
/**
 * _sqrt_recursion - return the square root of a number.
 * @n: number.
 * Return: sqrt of n.
 */
int _sqrt_recursion(int n)
{
	int i = 1;

	return (calc_sq(i, n));
}
/**
 * calc_sq - return square root of n.
 * @x: integer.
 * @n: integer.
 * Return: integer.
 */
int calc_sq(int x, int n)
{
	int d = x * x;

	if (d > n)
		return (-1);
	else if (d == n)
		return (x);
	else
		return (calc_sq(x + 1, n));
}

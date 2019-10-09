#include "holberton.h"
int prm(int x, int n);
/**
 * is_prime_number - return if it's a prime number.
 * @n: number to test.
 * Return: 1 if n prime, else 0.
 */
int is_prime_number(int n)
{
	return (prm(2, n));
}
/**
 * prm - prime number generator
 * @x: counter
 * @n: number to test.
 * Return: 1 or 0 or function recall.
 */
int prm(int x, int n)
{
	if (n <= 1)
		return (0);
	else if (x == n)
		return (1);
	else if (n % x == 0)
		return (0);
	else
		return (prm(x + 1, n));
}

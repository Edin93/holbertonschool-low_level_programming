#include "holberton.h"
/**
 * _isdigit - checks for a digit (0 to 9)
 * @c: int.
 * Return: 1 if c digit, else 0.
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}

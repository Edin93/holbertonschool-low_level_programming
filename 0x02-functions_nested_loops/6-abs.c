#include "holberton.h"
/**
 * _abs - compute absolute value of integer.
 * @a: type integer
 * Return: always 0.
 */
int _abs(int a)
{
	if (a < 0)
	{
		return (a * -1);
	}
	else
	{
		return (a);
	}
}

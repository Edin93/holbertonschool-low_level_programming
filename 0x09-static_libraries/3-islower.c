#include "holberton.h"
/**
 * _islower - returns if char is lower or upper case.
 * @c: type int.
 * Return: 0 or 1.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

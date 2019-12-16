#include "holberton.h"
/**
 * _isalpha - prings 1 or 0.
 * @c: type int.
 * Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}

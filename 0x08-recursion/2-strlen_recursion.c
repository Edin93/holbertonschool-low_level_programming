#include "holberton.h"
/**
 * _strlen_recursion - returns the length of the string.
 * @s: string pointer.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

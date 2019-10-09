#include "holberton.h"
/**
 * _puts_recursion - prints a string.
 * @s: string pointer.
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	else
		_putchar('\n');
}

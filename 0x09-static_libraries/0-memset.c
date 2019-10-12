#include "holberton.h"
/**
 * _memset - function fills the first n bytes of the memory area pointed to
 * by s with the constant byte b.
 * @b: the constant byte.
 * @s: the memory area pointed to.
 * @n: the number of bytes to fill.
 * Return: the pointed memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

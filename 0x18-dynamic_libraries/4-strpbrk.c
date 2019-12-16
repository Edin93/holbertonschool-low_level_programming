#include "holberton.h"
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s:string.
 * @accept: the bytes we'll search for.
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i <= len; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
		}
	}
	return (0);
}

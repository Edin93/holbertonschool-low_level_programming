#include "holberton.h"
/**
 * _strlen - return string length.
 * @s: string pointer.
 * Return: 0
 */
int _strlen(char *s)
{
	int i = 0;

	while ((*(s + i) != '\0'))
	{
		i++;
	}
	return (i);
}

#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string.
 * @c: character to check for.
 * Return: pointer to the first occurence of c in s, or null if no c found.
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&(s[i]));
		}
	}
	return (0);
}

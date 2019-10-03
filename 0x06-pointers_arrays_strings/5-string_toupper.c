#include "holberton.h"
/**
 * string_toupper - turn lower case to upper case
 * @s: string.
 * Return: string
 */
char *string_toupper(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] -= 32;
		}
	}
	return (s);
}

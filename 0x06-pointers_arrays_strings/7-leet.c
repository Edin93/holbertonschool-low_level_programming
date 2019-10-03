#include "holberton.h"
/**
 * leet - encode string into 1337
 * @s: string.
 * Return: string.
 */
char *leet(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		((s[i] == 'a' || s[i] == 'A') && (*(s + i) = '4')) ||
		((s[i] == 'e' || s[i] == 'E') && (s[i] = '3')) ||
			((s[i] == 'o' || s[i] == 'O') && (s[i] = '0')) ||
			((s[i] == 't' || s[i] == 'T') && (s[i] = '7')) ||
			((s[i] == 'l' || s[i] == 'L') && (s[i] = '1'));
	}
	return (s);
}

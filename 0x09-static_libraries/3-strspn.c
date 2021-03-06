#include "holberton.h"
/**
 * _strspn - gets the length of a prefix substring.
 * @s: the string.
 * @accept: the bytes to accept.
 * Return: the number of bytes in the initial segment of s which consist only
 * of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
/*	int i, j;
	int res = 0;
	int alen = 0;

	while (accept[alen] != '\0')
	{
		alen++;
	}

	for (i = 0; s[i] != ' ' && s[i] != '\0'; i++)
	{
		for (j = 0; j < alen; j++)
		{
			if (s[i] == accept[j])
			{
				res++;
			}
		}
	}
	return (res);
*/
	unsigned int n;
	char *p;
	for (n = 0 ; *s ; s++, n++)
	{
		for (p = accept ; *p && *p != *s ; p++)
			;
		if (!*p)
			break;
	}
	return (n);
}

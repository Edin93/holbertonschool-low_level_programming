#include "holberton.h"
/**
 * rot13 - encode a string using rot13
 * @s: string.
 * Return: string.
 */
char *rot13(char *s)
{
	int i, j;
	char org[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (org[j] == s[i])
			{
				s[i] = rot[j];
				break;
			}
		}
	}
	return (s);
}

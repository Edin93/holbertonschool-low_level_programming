#include "holberton.h"
int len(char *s);
int cmp(char *s1, char *s2, int len1, int len2, int i, int j);
/**
 * len - returns the length of the string.
 * @s: string pointer.
 * Return: string length.
 */
int len(char *s)
{
	if (*s != '\0')
	{
		return (len(s + 1) + 1);
	}
	return (0);
}
/**
 * wildcmp - compare 2 strings.
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if strings are identical otherwise 0.
 */
int wildcmp(char *s1, char *s2)
{
	int len1 = len(s1);
	int len2 = len(s2);

	return (cmp(s1, s2, len1 - 1, len2 - 1, 0, 0));
}
/**
 * cmp - compare strings.
 * @s1: string 1
 * @s2: string 2
 * @len1: string 1 length
 * @len2: string 2 length
 * @i: s1 counter
 * @j: s2 counter
 * Return: 1 or 0
 */
int cmp(char *s1, char *s2, int len1, int len2, int i, int j)
{
	if (s1[i] == s2[j])
		return (cmp(s1, s2, len1, len2, i + 1, j + 1));
	else if (s1[i] != s2[j] && s2[j] != '*')
		return (0);
	else if (s1[i] != s2[j] && s2[j] == '*' && s1[i + 1] == s2[j + 1])
		return (cmp(s1, s2, len1, len2, i + 1, j + 1));
	else if (s1[i] != s2[j] && s2[j] == '*')
		return (cmp(s1, s2, len1, len2, i + 1, j));
	else if (s1[i] == '\n')
		return (1);
	else
		return (1);
}

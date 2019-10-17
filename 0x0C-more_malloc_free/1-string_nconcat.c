#include <stdio.h>
#include <stdlib.h>
/**
 * len - get string length.
 * @s: string to calculat its length.
 * Return: return string length.
 */
int len(char *s)
{
	unsigned int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * string_nconcat - concatenates 2 strings
 * @s1: string one
 * @s2: string two
 * @n: the first n bytes.
 * Return: a pointer to a character or NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int len1 = 0, len2 = 0, i, j = 0;
	unsigned int limit;

	if (s1 == '\0')
		len1 = 0;
	else
		len1 = len(s1);
	if (s2 == '\0')
		len2 = 0;
	else
		len2 = len(s2);
	if (n >= len2)
		limit = len2;
	else
		limit = n;
	p = malloc(sizeof(char) * (len1 + limit + 1));
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	for (i = 0; i < (len1 + limit); i++)
	{
		if (i < len1)
			p[i] = s1[i];
		else
		{
			p[i] = s2[j];
			j++;
		}
	}
	p[i] = '\0';
	return (p);
}

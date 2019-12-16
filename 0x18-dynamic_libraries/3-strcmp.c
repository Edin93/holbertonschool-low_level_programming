#include "holberton.h"
/**
 * _strcmp - compare strings
 * @s1: string
 * @s2: string
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int s1len = 0;
	int s2len = 0;
	int len = 0;
	int i;

	while (s1[s1len] != '\0')
	{
		s1len++;
	}
	while (s2[s2len] != '\0')
	{
		s2len++;
	}
	if (s2len >= s1len)
		len = s1len;
	else
		len = s2len;
	for (i = 0; i < len; i++)
	{
		if (s2[i] != s1[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}

#include "holberton.h"
/**
 * rev_string - reverse a string
 * @s: string's pointer
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char aux;
	int len;
	int mid;

	while ((*(s + i) != '\0'))
	{
		i++;
	}
	len = i - 1;
	mid = len / 2;

	for (j = 0; j < mid; j++)
	{
		aux = s[j];
		s[j] = s[len - j];
		s[len - j] = aux;
	}
}

#include "holberton.h"
#include <string.h>
/**
 * rev_string - reverse a string
 * @s: string's pointer
 */
void rev_string(char *s)
{
	int i;
	char aux;
	int len = strlen(s);
	int mid = len / 2;

	for (i = 0; i < mid; i++)
	{
		aux = s[i];
		s[i] = s[len - 1 - i];
		s[len - 1 - i] = aux;
	}
}

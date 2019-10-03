#include "holberton.h"
/**
 * cap_string - capitalize string
 * @s: string
 * Return: string
 */
char *cap_string(char *s)
{
	int len = 0;
	int i;

	while (s[len] != '\0')
	{
		len++;
	}

	for (i = 0; i < len; i++)
	{
		if (s[i] == '\n' || s[i] == '\t' || s[i] == ' ' || s[i] == '.'
		    || s[i] == ';' || s[i] == ',' || s[i] == '!' || s[i] == '?'
		    || s[i] == '"' || s[i] == '(' || s[i] == ')' || s[i] == '{'
		    || s[i] == '}')
		{
			if (s[i + 1] >= 97 && s[i + 1] <= 122)
				s[i + 1] -= 32;
		}
	}
	return (s);
}
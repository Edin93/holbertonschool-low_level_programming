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

	for (i = 1; i < len; i++)
	{
		if (s[i - 1] == '\n' || s[i - 1] == '\t' || s[i - 1] == ' ' || s[i - 1] == '.'
		    || s[i - 1] == ';' || s[i - 1] == ',' || s[i - 1] == '!' || s[i - 1] == '?'
		    || s[i - 1] == '"' || s[i - 1] == '(' || s[i - 1] == ')' || s[i - 1] == '{'
		    || s[i - 1] == '}')
		{
			if (s[i] >= 97 && s[i] <= 122)
				s[i] -= 32;
		}
	}
	return (s);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to newly allocated memory space, which contains
 * a copy of the string given as a parameter.
 * @str: string
 * Return: str or NULL.
 */
char *_strdup(char *str)
{
	int len = 0;
	char *p;
	int i;

	if (str == '\0')
		return (NULL);
	while (str[len] != '\0')
		len++;
	p = malloc(sizeof(char) * len + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i <= len; i++)
		p[i] = str[i];
	return (p);
}

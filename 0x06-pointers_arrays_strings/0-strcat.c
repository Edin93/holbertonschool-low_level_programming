#include "holberton.h"
/**
 * _strcat - concatenate 2 strings.
 * @dest: destination string
 * @src: source string
 * Return: dest address.
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int dest_len = 0;
	int src_len = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[src_len] != '\0')
	{
		src_len++;
	}

	for (i = 0; i <= src_len; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}

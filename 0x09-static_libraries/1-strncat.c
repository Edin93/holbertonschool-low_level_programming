#include "holberton.h"
/**
 * _strncat - concatenate 2 strings.
 * @dest: destination string
 * @src: source string
 * @n: most n bytes from src.
 * Return: pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
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

	for (i = 0; i < n; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}

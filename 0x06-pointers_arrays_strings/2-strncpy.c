#include "holberton.h"
/**
 * _strncpy - copies strings
 * @dest: string
 * @src: string
 * @n: integer
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int dl = 0;
	int sl = 0;
	int i;

	while (dest[dl] != '\0')
	{
		dl++;
	}
	while (src[sl] != '\0')
	{
		sl++;
	}
	for (i = 0; i < n; i++)
	{
		if (src[n - 1] != '\0')
			dest[i] = 0;
		if (i > sl)
			dest[i] = '\0';
		else
		{
			dest[i] = src[i];
		}
	}
	return (dest);
}

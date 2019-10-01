#include "holberton.h"
/**
 * _strcpy - copy string pointed to src to the buffer pointed to dest
 * @dest: destination
 * @src: source
 * Return: a character.
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i;

	while ((*(src + len) != '\0'))
	{
		len++;
	}
	for (i = 0; i <= len; i++)
	{
		dest[i] = src[i];
	}
	return (&dest[0]);
}

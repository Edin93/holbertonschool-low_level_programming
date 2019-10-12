#include "holberton.h"
/**
 * _memcpy - copy memory area.
 * @dest: memory area destination
 * @src: memory area source
 * @n: number of bytes to copy from src to dest.
 * Return: pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

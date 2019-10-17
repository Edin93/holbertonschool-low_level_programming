#include <stdio.h>
#include <stdlib.h>
/**
 * _calloc - allocate memory for an array using malloc.
 * @nmemb: array elements number.
 * @size: byte size of each element.
 *  Return: pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}

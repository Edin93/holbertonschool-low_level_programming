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
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(size * nmemb + 1);
	if (p == NULL)
		return (NULL);
	return (p);
}

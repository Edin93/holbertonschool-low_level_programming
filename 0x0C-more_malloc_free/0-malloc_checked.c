#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc.
 * @b: unsigned int to which we'll allocate the memory.
 * Return: pointe to the allocated memory.
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *p;

	p = malloc(sizeof(b));
	if (p == NULL)
		exit(98);
	return (p);
}

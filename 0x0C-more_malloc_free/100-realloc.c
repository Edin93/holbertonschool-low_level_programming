#include <stdio.h>
#include <stdlib.h>
/**
 * _realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: old memory size, in bytes.
 * @new_size: new memory size, in bytes.
 * Return: ptr or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p = ptr;
	char *np;
	unsigned int i, limit;

	if (ptr == NULL)
	{
		np = malloc(new_size);
		if (np == NULL)
			return (NULL);
		return (np);
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	else if (new_size > old_size || old_size > new_size)
	{
		free(ptr);
		if (new_size > old_size)
			limit = new_size;
		else
			limit = old_size;
		np = malloc(limit);
		if (np == NULL)
			free(np);
		for (i = 0; i < limit; i++)
		{
			np[i] = p[i];
		}
	}
	return (np);
}

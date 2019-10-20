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
	char *np = ptr;
	unsigned int i;

	if (new_size > old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			np[i] = p[i];
		}
	}
	else if (new_size == old_size)
		return (ptr);
	else if (ptr == NULL)
		ptr = malloc(new_size);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	free(ptr);
	if (np == NULL)
		free(np);
	return (np);
}

#include <stdio.h>
#include <stdlib.h>
/**
 * realloc - reallocates a memory block.
 * @ptr: pointer to the memory previously allocated.
 * @old_size: old memory size, in bytes.
 * @new_size: new memory size, in bytes.
 * Return: ptr or NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *np;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (ptr == NULL)
	{
		free(ptr);
		ptr = malloc(new_size);
	}
	else if (new_size > old_size)
	{
		np = malloc(new_size);
		if (np != NULL)
		{
			free(np);
			ptr = malloc(new_size);
		}
		else
		{
			free(ptr);
			ptr = malloc(new_size);
		}
	}
	else if (new_size < old_size)
	{
		char *op = ptr;
		char *newP = malloc(new_size);
		for (i = 0; i < new_size; i++)
		{
			newP[i] = op[i];
		}
		free(ptr);
		return (newP);
	}
	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

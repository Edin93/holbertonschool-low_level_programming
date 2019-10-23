#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - it executes a function given as params on each elem of arr.
 * @array: array.
 * @size: array size.
 * @action: pointer to function you need to use.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}

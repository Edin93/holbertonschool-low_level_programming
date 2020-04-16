#include "search_algos.h"
/**
 * linear_search - searches for a value in an array using linear search.
 * @array: the array to search.
 * @size: size of the array.
 * @value: value to search for.
 * Return: Returns the first index where value is located otherwise returns -1
 */
int linear_search(int *array, size_t size, int value)
{
	int i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

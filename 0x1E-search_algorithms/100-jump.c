#include "search_algos.h"
#include <math.h>
/**
 * jump_search - Searches for a value in a sorted array of integers using
 * jump search algorithms.
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search for.
 * Return: index of value, -1 otherwise.
 */
int jump_search(int *array, size_t size, int value)
{
	int step, i, j;
	int sz = (int)size;

	if (array == NULL)
		return (-1);
	step = sqrt(sz);
	for (i = 0; i < sz; i += step)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (
			i + step >= sz ||
			(i + step < sz && array[i + step] >= value)
			)
		{
			printf("Value found between indexes [%d] and [%d]\n",
			       i, i + step);
			for (j = i; j <= i + step && j < sz; j++)
			{
				printf("Value checked array[%d] = [%d]\n",
				       j, array[j]);
				if (array[j] == value)
					return (j);
			}
		}
	}
	return (-1);
}

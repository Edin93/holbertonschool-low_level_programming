#include "search_algos.h"
/**
 * interpolation_search - Searches for a value in a sorted array of integers
 * using interpolatino search algorithm.
 * @array: array to search.
 * @size: size of the array.
 * @value: value to search for.
 * Return: the first index where value is located, otherwise -1.
 */
int interpolation_search(int *array, size_t size, int value)
{
	int low, high, pos;

	if (array == NULL)
		return (-1);
	low = 0;
	high = (int)size - 1;
	pos = low + (((double)(high - low) / (array[high] - array[low]))
		     * (value - array[low]));
	while (high >= low && value >= array[low] && value <= array[high])
	{
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return ((int)pos);
		if (array[pos] > value)
			high = pos - 1;
		else if (array[pos] <  value)
			low = pos + 1;
		pos = low + (((double)(high - low) / (array[high] - array[low]))
			     * (value - array[low]));
	}
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}

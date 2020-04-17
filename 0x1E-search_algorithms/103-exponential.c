#include "search_algos.h"
/**
 * bin_search - searches for a value in a sorted array of ints
 * using binary search algorithm.
 * @array: pointer to to the 1st element of the array to search.
 * @value: value to search for.
 * @start: start index.
 * @end: end index.
 * Return: Returns the index of the found value, otherwise returns -1.
 */
int bin_search(int *array, int value, int start, int end)
{
	int min, max, i, mid;

	min = start;
	max = end;
	while (max >= min)
	{
		printf("Searching in array: ");
		for (i = min; i <= max; i++)
		{
			printf("%d", array[i]);
			if (i != max)
				printf(", ");
		}
		printf("\n");
		mid = (max + min) / 2;
		if (array[mid] == value)
			return (mid);
		if (array[mid] > value)
			max = mid - 1;
		else if (array[mid] < value)
			min = mid + 1;
	}
	return (-1);
}
/**
 * exponential_search - Search for a value in a sorted array of integers
 * using the exponential search algorithm.
 * @array: array to search.
 * @size: array size.
 * @value: value to search.
 * Return: the first index where value is located, -1 otherwise.
 */
int exponential_search(int *array, size_t size, int value)
{
	int i, sz, min;

	sz = (int)size;
	if (array == NULL || size == 0)
		return (-1);
	if (value == array[0])
	{
		printf("Value checked array[%d] = [%d]\n", 0, array[0]);
		return (0);
	}
	for (i = 1; i < sz && array[i] <= value; i *= 2)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
	}
	printf("Value found between indexes [%d] and [%d]\n",
	       i / 2, i);
	if (i + 1 < sz)
		min = i;
	else
		min = sz - 1;
	return (bin_search(array, value, i / 2, min));
}

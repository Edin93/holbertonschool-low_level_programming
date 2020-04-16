#include "search_algos.h"
/**
 * binary_search - searches for a value in a sorted array of ints
 * using binary search algorithm.
 * @array: pointer to to the 1st element of the array to search.
 * @size: size of the array.
 * @value: value to search for.
 * Return: Returns the index of the found value, otherwise returns -1.
 */
int binary_search(int *array, size_t size, int value)
{
	int min, max, i, mid;

	if (array == NULL)
		return (-1);
	min = 0;
	max = (int)size - 1;
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

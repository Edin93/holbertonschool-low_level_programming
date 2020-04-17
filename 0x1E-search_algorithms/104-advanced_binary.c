#include "search_algos.h"

/**
 * rec_search - Search for the first index where a value appears in
 * a sorted array using advanced binary search.
 * @array: the array to search.
 * @size: size of the array.
 * @value: the value to look for.
 * @mn: starting index.
 * @mx: end index.
 * Return: the index where value is located, -1 otherwise.
 */
int rec_search(int *array, int size, int value, int mn, int mx)
{
	int min, max, i, mid;

	max = mx;
	min = mn;
	if (max >= min)
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
		if (max == min && array[max] == value)
			return (max);
		if (array[mid] == value)
		{
			if (array[mid - 1] != value)
				return (mid);
			max = mid;
		}
		else
		{
			if (array[mid] > value)
				max = mid;
			else if (array[mid] < value)
				min = mid + 1;
		}
		return (rec_search(array, size, value, min, max));
	}
	return (-1);
}

/**
 * advanced_binary - Search for the first index where a value appears in
 * a sorted array using advanced binary search.
 * @array: the array to search.
 * @size: size of the array.
 * @value: the value to look for.
 * Return: the index where value is located, -1 otherwise.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (rec_search(array, (int)size, value, 0, size - 1));
}

#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - prints the sum of the 2 diagonals of square matrix
 * of integers.
 * @a: array.
 * @size: size of array.
 */
void print_diagsums(int *a, int size)
{
	int i;
	int x1 = 0;
	int x2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
		x1 += a[i];
	}
	for (i = size - 1; i < (size * size) - 1; i += (size - 1))
	{
		x2 += a[i];
	}
	printf("%u, %u\n", x1, x2);
}

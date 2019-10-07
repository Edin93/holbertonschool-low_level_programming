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
	int ds = size * size;

	for (i = 0; i < ds; i += size + 1)
	{
		x1 += a[i];
	}
	for (i = size - 1; i < ds - 1; i += (size - 1))
	{
		x2 += a[i];
	}
	printf("%d, %d\n", x1, x2);
}

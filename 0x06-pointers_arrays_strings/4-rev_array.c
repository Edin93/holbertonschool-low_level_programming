#include "holberton.h"
/**
 * reverse_array - reverse array
 * @a: array.
 * @n: array elements number.
 */
void reverse_array(int *a, int n)
{
	int i;
	int aux;

	for (i = 0; i < (n / 2); i++)
	{
		aux = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = aux;
	}
}

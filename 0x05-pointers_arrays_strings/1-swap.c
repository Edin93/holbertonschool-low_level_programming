#include "holberton.h"
/**
 * swap_int - swap integer values
 * @a: first integer's pointer.
 * @b: second integer's pointer.
 */
void swap_int(int *a, int *b)
{
	int x = *a;
	*a = *b;
	*b = x;
}

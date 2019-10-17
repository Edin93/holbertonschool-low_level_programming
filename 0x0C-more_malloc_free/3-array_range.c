#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min int.
 * @max: max int.
 * Return: pointer to newly created array or NULL.
 */
int *array_range(int min, int max)
{
	int *p;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;
	p = malloc(sizeof(int) * len);
	if (p == NULL)
		return (NULL);
	i = 0;
	while (i < len)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}

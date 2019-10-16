#include "holberton.h"
/**
 * infinite_add - add 2 numbers.
 * @n1: integer to add.
 * @n2: integer to add.
 * @r: buffer in which the addition will be stored.
 * @size_r: the buffer (r) size.
 * Return: a pointer to the result.
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i;
	/* int s = 0; */
	(void)n1;
	(void)n2;

	for (i = 0; i < size_r; i++)
		r[i] = 0 + 48;
	r[size_r] = '\0';

/*	for (i = size_r - 1; i >= 0; i--)
	{
		if (i - 1 < 0)
			return (0);
		if (n1[i])
		{
			if (n2[i])
				s = ((n1[i] - 48) + (n2[i] - 48));
			if (s > 9)
			{
				r[i] = ((r[i] - 48) + s % 10) + 48;
				r[i - 1] = ((r[i - 1] - 48) + s / 10) + 48;
			}
			else
				r[i] = n1[i];
		}
		else if (n2[i])
		{
			if (n1[i])
				s = ((n1[i] - 48) + (n2[i] - 48));
			if (s > 9)
			{
				r[i] = ((r[i] - 48) + s % 10) + 48;
				r[i - 1] = ((r[i - 1] - 48) + s / 10) + 48;
			}
			else
				r[i] = n2[i];
		}
	}
*/
	return r;
}

#include <stdio.h>
#include <stdlib.h>
/**
 * alloc_grid - return a pointer to a 2 dimentional array of integers.
 * @width: array width
 * @height: array height
 * Return: NULL on failure.
 */
int **alloc_grid(int width, int height)
{
	int l, c;
	int lim;
	int **p;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		p = malloc(sizeof(int *) * width);
		if (p == NULL)
			return (NULL);
		for (l = 0; l < width; l++)
		{
			p[l] = malloc(sizeof(int) * height);
			if (p[l] == NULL)
			{
				for (lim = l; lim >= 0; lim--)
					free(p[lim]);
				free(p);
				return (NULL);
			}
			for (c = 0; c < height; c++)
			{
				p[l][c] = 0;
			}
		}
	}
	return (p);
}

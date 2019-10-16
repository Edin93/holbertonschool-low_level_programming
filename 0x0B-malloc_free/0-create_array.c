#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - create an array of specific char c.
 * @size: allocated memory size.
 * @c: the special character.
 * Return: pointer to the array.
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	if (size == 0)
		return (NULL);
	p = malloc(sizeof(char) * size);
	if (p == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		p[i] = c;
	}
	p[i] = '\0';
	return (p);
}

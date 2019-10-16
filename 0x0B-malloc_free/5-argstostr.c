#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all arguments of your program.
 * @ac: arguments count.
 * @av: arguments vector.
 * Return: pointer to new string or NULL if failed.
 */
char *argstostr(int ac, char **av)
{
	int i, j, c, size = 0;
	char *p;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			size++;
		}
	}
	p = malloc(sizeof(char) * size + 1 + ac);
	if (p == NULL)
	{
		free(p);
		return (NULL);
	}
	c = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			p[c] = av[i][j];
			c++;
		}
		p[c] = '\n';
		c++;
	}
	p[size + size] = '\0';
	return (p);
}

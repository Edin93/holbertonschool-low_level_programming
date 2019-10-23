#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - launch functions.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: result.
 */
int main (int argc, char * argv[])
{
	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int (*p)(int, int) = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	int res = p(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", res);
	return (0);
}

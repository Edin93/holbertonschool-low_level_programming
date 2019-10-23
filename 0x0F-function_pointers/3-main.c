#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - launch functions.
 * @argc: arguments count.
 * @argv: arguments vector.
 * Return: result.
 */
int main(int argc, char *argv[])
{
	int res, n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	int (*p)(int, int) = get_op_func(argv[2]);
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	res = p(n1, n2);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", res);
	return (0);
}

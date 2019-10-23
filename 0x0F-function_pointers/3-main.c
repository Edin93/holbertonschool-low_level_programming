#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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
	int (*p)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	p = get_op_func(argv[2]);
	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);
	res = p(n1, n2);
	printf("%d\n", res);
	return (0);
}

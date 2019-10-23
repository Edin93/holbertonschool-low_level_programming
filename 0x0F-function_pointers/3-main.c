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
	if (argv[2][0] != '+' || argv[2][0] != '-' || argv[2][0] != '*'
	    || argv[2][0] != '/' || argv[2][0] != '%')
	if (argv[2][0] != '+')
	{
		printf("Error\n");
		exit(99);
	}
	if (atoi(argv[3]) == 0 && (argv[2][0] == '/' || argv[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}

	int (*p)(int, int) = get_op_func(argv[2]);
	int res = p(atoi(argv[1]), atoi(argv[3]));

	printf("%d\n", res);
	return (0);
}

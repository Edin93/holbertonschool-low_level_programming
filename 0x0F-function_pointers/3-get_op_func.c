#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "3-calc.h"
/**
 * get_op_func - get operator.
 * @s: operator.
 * Return: pointer to the function corresponding to the given operator.
 */
int (*get_op_func(char *s))(int, int)
{
	int i = 0;
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};

	while (i < 6)
	{
		if (strcmp(ops[i].op, s) == 0)
			break;
		i++;
	}
	return (ops[i].f);
}

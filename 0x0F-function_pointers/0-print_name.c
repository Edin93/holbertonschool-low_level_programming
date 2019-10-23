#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
 * print_name - prints a name.
 * @name: pointer to name
 * @f: function that prints name as is.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL)
		f(name);
}

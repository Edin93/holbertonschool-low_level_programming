#include "holberton.h"
#include <stdio.h>
/**
 * set_string - set the value of a pointer to a char.
 * @s: double pointer.
 * @to: new string.
 */
void set_string(char **s, char *to)
{
	*s = to;
}

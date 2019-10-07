#include "holberton.h"
#include <stdio.h>

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);
	printf("%s\n", t);

	char *x = "what is going on here?";
	char *y = "is";
	t = _strstr(x, y);
	printf("%s\n", t);

	char *a = "bara bara biri biri boro boro bara biri boro";
	char *b = "biri";
	t = _strstr(a, b);
	printf("%s\n", t);

	char *p = "hello is it me you looking for";
	char *q = "war";
	t = _strstr(p, q);
	printf("%s\n", t);

	return (0);
}

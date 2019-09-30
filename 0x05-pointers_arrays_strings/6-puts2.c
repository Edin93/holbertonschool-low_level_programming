#include "holberton.h"
/**
 * puts2 - prints every other character of a string.
 * @str: string pointer
 */
void puts2(char *str)
{
	int i = 0;
	int len;

	while ((*(str + i) != '\0'))
	{
		i++;
	}
	len = i;

	for (i = 0; i < len; i++)
	{
		if (i % 2 == 0)
			_putchar(i + '0');
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * puts_half - prints second half of a string.
 * @str: string's pointer
 */
void puts_half(char *str)
{
	int i = 0;
	int half, len;

	while ((*(str + i) != '\0'))
	{
		i++;
	}
	len = i;

	if (len % 2 == 0)
		half = len / 2;
	else
		half = (len - 1) / 2;

	for (i = half; i <= len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}

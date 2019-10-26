#include <stdio.h>
#include <string.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * pc - print character
 */
void pc(va_list list)
{
		printf("%c", va_arg(list, int));
}
/**
 * pi - print integer
 */
void pi(va_list list)
{
	printf("%d", va_arg(list, int));
}
/**
 * pf - print float
 */
void pf(va_list list)
{
	printf("%f", va_arg(list, double));
}
/**
 * ps - print string
 */
void ps(va_list list)
{
	char *s = va_arg(list, char *);

	if (s != NULL)
		printf("%s", s);
	else
		printf("(nil)");
}
/**
 * print_all - prints anything
 * @format: list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	form forms[] = {
		{'c', pc},
		{'i', pi},
		{'f', pf},
		{'s', ps}
	};
	int i = 0, j;
	va_list things;
	void (*func)(va_list);
	va_start(things, format);

	while (format[i] != '\0')
	{
		j = 0;
		while (j < 5)
		{
			if (format[i] == forms[j].name)
			{
				func = forms[j].f;
				func(things);
				if (format[i + 1] != '\0')
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(things);
}

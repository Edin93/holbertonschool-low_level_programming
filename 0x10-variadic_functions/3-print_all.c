#include <stdio.h>
#include <stdarg.h>
/**
 * struct form - format struct.
 * @name: format name.
 * @type: type.
 * @f: function to use.
 */
typedef struct form
{
	char *name;
	type type;
	void (*f)(int n, ...);
} form;
/**
 * pc - print character
 * @n: number
 */
void pc(int n, ...)
{
	va_list list;

	if (n != 0)
	{
		va_start(list, n);
		printf("%c", va_arg(list, char));
	}
	va_end(list);
}
/**
 * pi - print integer
 * @n: number
 */
void pi(int n, ...)
{
	va_list list;

	if (n != 0)
	{
		va_start(list, n);
		printf("%d", va_arg(list, int));
	}
	va_end(list);
}
/**
 * pf - print float
 * @n: number
 */
void pf(int n, ...)
{
	va_list list;

	if (n != 0)
	{
		va_start(list, n);
		printf("%f", va_arg(list, float));
	}
	va_end(list);
}
/**
 * ps - print string
 * @n: number
 */
void ps(int n, ...)
{
	va_list list;

	if (n != 0)
	{
		va_start(list, n);
		char *s = va_arg(list, *char);

		if (s == NULL)
			printf("(nil)");
		else
			printf("%s", s);
	}
	va_end(list);
}
/**
 * print_all - prints anything
 * @format: list of arguments passed to the function.
 */
void print_all(const char * const format, ...)
{
	form forms[] = {
		{"c", char, pc},
		{"i", int, pi},
		{"f", float, pf},
		{"s", *char, ps},
		{NULL, NULL}
	};
	int i = 0, j;
	va_list things;

	while (format[i] != '\0')
	{
		va_start(things, 1);
		j = 0;
		while (forms[j].name != NULL)
		{
			if (format[i] == forms[j].name)
			{
				forms[j].f(1, va_arg(things, forms[j].type));
				break;
			}
		}
	}
	printf("\n");
}

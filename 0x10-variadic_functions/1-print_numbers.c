#include <stdio.h>
#include <stdarg.h>
/**
 * print_numbers - print numbers followed by a new line.
 * @separator: string to be printed between numbers.
 * @n: number of integers passed to the function.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	if (n != 0)
		va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));
		if (i != n - 1)
			printf("%s", separator);
	}
	printf("\n");
}

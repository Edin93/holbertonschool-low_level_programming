#ifndef HEADER
#define HEADER
#include <stdarg.h>
/**
 * struct form - format struct.
 * @name: format name.
 * @f: function to use.
 */
typedef struct form
{
	char name;
	void (*f)(va_list);
} form;
int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

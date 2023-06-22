#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line.
 * @separator: string that sepatare strings
 * @n: number of string
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ptr;
	unsigned int i;
	char *str;

	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(ptr, char *);
		if (str == NULL)
			printf("nil");
		printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ptr);
}

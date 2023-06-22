#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: char that separat numbers
 * @n: number of integers passed to the function
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;
	int digit;

	va_start(ptr, n);
	while (separator[len] != '\0')
		len++;
	for (i = 0; i < n; i++)
	{
		digit = va_arg(ptr, int);
		printf("%d",digit);
		while (i < n - 1 && separator != NULL)
			printf("%s", separator);
	}
	putchar('\n');
	va_end(ptr);
}

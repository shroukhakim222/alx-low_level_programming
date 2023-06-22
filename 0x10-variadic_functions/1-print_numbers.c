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
	int len = 0, j;
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
		for (j = 0; j < len && i < n - 1; j++)
			putchar(separator[j]);
	}
	putchar('\n');
	va_end(ptr);
}

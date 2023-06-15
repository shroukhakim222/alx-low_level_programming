#include "unistd.h"

/**
 * _putchar - print char to stdout
 * @c: char to print
 *
 * Return: 1 (success) -1 (fail)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

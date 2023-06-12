#include <unistd.h>

/**
 * _putchar - print char to stdout
 * @s: char to be printed
 *
 * Return: 1 when success and -1 when fail
 */

int _putchar(char s)
{
	return (write(1, &c, 1));
}

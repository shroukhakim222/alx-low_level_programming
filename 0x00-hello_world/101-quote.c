#include <stdio.h>

/**
 * main - print string to screen
 *
 * Return: always 1
 */

int main(void)
{
	char st[] = {'a', 'n', 'd', ' ', 't', 'h', 'a', 't', ' ',
		'p', 'i', 'e', 'c', 'e', ' ', 'o', 'f',
		' ', 'a', 'r', 't', ' ', 'i', 's', ' ',
		'u', 's', 'e', 'f', 'u', 'l', '"', ' ',
		'-', ' ', 'D', 'o', 'r', 'a', ' ', 'K',
		'o', 'r', 'p', 'a', 'r', ',', ' ', '2', '0',
		'1', '5', '-', '1', '0', '-', '1', '9'};
	int len = sizeof(st) - 1;
	int i;

	for (i = 0; i < len; i++)
	{
		putchar(st[i]);
	}
	return (1);
}

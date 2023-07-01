#include "lists.h"

void print_bef(void) __attribute__ ((constructor));

/**
 * print_bef - function excute before main
 * Return: void
 */

void print_bef(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

#include <stdio.h>
#include "main.h"

/**
 * swap_int - function swap int
 * @a: first pointer
 * @b: second pointer
 * Return: swapped valude
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

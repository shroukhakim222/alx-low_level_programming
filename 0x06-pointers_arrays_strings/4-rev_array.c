#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: an array to reverse
 * @n: number of element in array
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, tmp;

	for (i = 0; i < n / 2; i++)
	{
		a[i] = tmp;
		a[i] = a[n - i - 1];
		a[n - i - 1] = tmp;
	}
}

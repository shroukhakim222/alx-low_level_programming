#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers.
 * @min: first number in array
 * @max: last number in array
 *
 * Return: array contains number from min to max
 */

int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
	if (arr == NULL)
		return (NULL);
	for (i = min; i <= max; i++)
		arr[i] = i;
	return (arr);
}

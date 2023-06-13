#include "main.h"
#include "stdlib.h"

/**
 * **alloc_grid -  returns a pointer to a 2D array of integers
 * @width: number of colume
 * @hight: number of rows
 *
 * Return: returns a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	if (width <= 0 || hight <= 0)
		return (NULL);
	ptr = malloc(sizeof(int*) * hight);
	ptr[hight] = malloc(sizeof(int) * width);
	if (ptr == NULL)
		return (NULL);
	for (int i = 0; i < hight; i++)
		for (int j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}

#include "main.h"
#include "stdlib.h"

/**
 * **alloc_grid -  returns a pointer to a 2D array of integers
 * @width: number of colume
 * @height: number of rows
 *
 * Return: returns a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int*) * height);
	ptr[height] = malloc(sizeof(int) * width);
	if (ptr == NULL)
		return (NULL);
	for (int i = 0; i < height; i++)
		for (int j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}

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
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	ptr = malloc(sizeof(int*) * height);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
		ptr[i] = malloc(sizeof(int) * width);
	if (ptr[i] == NULL)
	{
		for (; i >= 0; i--)
			free(ptr[i]);
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			ptr[i][j] = 0;
	return (ptr);
}

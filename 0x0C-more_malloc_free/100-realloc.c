#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - reallocates a memory block 
 * @ptr: pointer to allocated memory
 * @old_size: old size of allocated memory
 * @new_size: new size to be allocated
 *
 * Return: pointer with new allocated memory
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr1;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	ptr1 = malloc(new_size);
	if (ptr1 == NULL)
		return (NULL);
	old_ptr = ptr;
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			ptr1[i] = old_ptr[i];
	}
	if (old_size > new_size)
	{
		for (i = 0; i < new_size; i++)
			ptr1[i] = old_ptr[i];
	}
	free(ptr);
	return (ptr1);
}

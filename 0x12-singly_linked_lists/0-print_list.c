#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints all the elements of a list_t list.
 * @h: pointer to structure
 *
 * Return: the number of node
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
	}
	return (count);
}

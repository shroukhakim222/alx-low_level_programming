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
		printf("[%u] ", ptr->len);
		if (ptr->str == NULL)
			printf("(nil)\n");
		else
			printf("%s\n", ptr->str);
		ptr = ptr->next;
	}
	return (count);
}

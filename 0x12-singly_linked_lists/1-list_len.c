#include "lists.h"

/**
 * list_len - number of elements in a linked list_t list
 * @h: pointer to the head
 * Return: number of element
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *ptr;

	ptr = h;
	while (ptr != NULL)
	{
		count++;
		ptr = ptr->next;
	}
	return (count);
}

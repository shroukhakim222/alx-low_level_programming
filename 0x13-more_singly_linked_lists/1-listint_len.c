#include "lists.h"

/**
 * listint_len - calculate the length of list
 * @h: pointer to head of the list
 *
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;
	const listint_t *ptr;

	ptr = h;
	if (ptr == NULL)
		return (0);
	while (ptr != NULL)
	{
		len++;
		ptr = ptr->next;
	}
	return (len);
}

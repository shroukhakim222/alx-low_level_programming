#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: head to the first element
 *
 * Return: he number of nodes
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *ptr;
	size_t count = 0;

	ptr = h;
	while  (ptr)
	{
		count++;
		printf("%d\n", ptr->n);
		ptr = ptr->next;
	}
	return (count);
}

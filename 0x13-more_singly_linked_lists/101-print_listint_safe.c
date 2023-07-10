#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t n = 0;

	if (!(head))
		exit(98);
	while (head)
	{
		printf("[%p] %d\n", (void*)head, head->n);
		head = head->next;
		n++;
	}
	return (n);
}

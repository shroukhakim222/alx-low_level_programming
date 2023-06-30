#include "lists.h"

/**
 * free_list - rees a list_t list.
 * @head: pointer to first node
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *next;
	list_t current;

	current = head;
	while (current != NULL)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

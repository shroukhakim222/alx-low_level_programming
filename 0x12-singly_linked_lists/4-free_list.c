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

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}

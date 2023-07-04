#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: pointer to first element
 *
 * Return: free list
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head == NULL)
		return;
	while (head != NULL)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}

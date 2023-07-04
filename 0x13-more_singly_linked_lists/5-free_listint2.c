#include "lists.h"

/**
 * free_listint2 - frees a listint_t list.
 * @head: pointer to first element in the list
 *
 * Return: head to NULL
 */

void free_listint2(listint_t **head)
{
	listint_t *ptr, *ptr1;

	ptr1 = *head;
	*head = NULL;
	while (ptr1)
	{
		ptr = ptr1->next;
		free(ptr1);
		ptr1 = ptr;
	}
}

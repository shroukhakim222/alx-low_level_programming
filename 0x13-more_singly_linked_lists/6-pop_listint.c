#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list,
 * and returns the head node’s data (n).
 * @head: pointer to head
 *
 * Return: the head node’s data (n).
 * or 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *ptr, *sec;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = (*head)->next;
	free(ptr);
	*head = NULL;
	sec = ptr->next;
	*head = sec;
	return (i);
}

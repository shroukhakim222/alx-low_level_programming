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
	listint_t *sec;
	int i;

	if (*head == NULL || head == NULL)
		return (0);
	sec = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = sec;
	return (i);
}

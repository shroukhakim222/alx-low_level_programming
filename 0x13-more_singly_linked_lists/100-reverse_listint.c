#include "lists.h"

/**
 * reverse_listint - reverses a listint_t linked list.
 * @head: pointer to first node
 *
 * Return: revesed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *post;
	listint_t *pre = NULL;

	while (*head)
	{
		post = (*head)->next;
		(*head)->next = pre;
		pre = (*head);
		*head = post;
	}
	*head = pre;
	return (*head);
}

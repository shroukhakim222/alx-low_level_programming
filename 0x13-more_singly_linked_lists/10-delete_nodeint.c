#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of
 * a listint_t linked list.
 * @head: pointer to first node
 * @index: to be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *del;

	ptr = *head;
	if (!(*head))
		return (-1);
	if (index == 0)
	{
		del = *head;
		*head = ((*head)->next);
		free(del);
		return (1);
	}
	while (ptr && --index)
	{
		ptr = ptr->next;
	}
	if (index != 0)
		return (-1);
	del = ptr->next;
	ptr->next = ptr->next->next;
	free(del);
	return (1);
}

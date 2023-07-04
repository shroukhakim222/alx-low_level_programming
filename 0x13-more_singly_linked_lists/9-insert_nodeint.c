#include "lists.h"

/**
 * insert_nodeint_at_index - nserts a new node at a given position.
 * @head: pointer to first node
 * @idx: position to insert
 * @n: data to be inserted
 *
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *ptr;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	ptr = *head;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (ptr && --idx)
	{
		ptr = ptr->next;
	}
	if (idx != 0)
		return (NULL);
	new->next = ptr->next;
	ptr->next = new;
	return (new);
}

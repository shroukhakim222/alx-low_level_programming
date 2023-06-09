#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to the first node
 * @index: the index
 *
 * Return: returns the nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;

	ptr = head;
	while (ptr && index)
	{
		ptr = ptr->next;
		index--;
	}
	if (index != 0)
		return (NULL);
	return (ptr);
}

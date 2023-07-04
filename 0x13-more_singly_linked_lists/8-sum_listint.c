#include "lists.h"

/**
 * sum_listint - calculate the sum of the data
 * @head: pointer to first node
 *
 * Return: he sum of all the data (n) of a listint_t linked list.
 * if the list is empty, return 0
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

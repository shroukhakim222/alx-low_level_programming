#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of list.
 * @head: pointer to pointer
 * @str: pointer to string
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	while (str[len] != '\0')
		len++;
	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;
	return (*head);
}

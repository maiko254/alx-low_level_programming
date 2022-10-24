#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at beginning of list_t list
 * @head: pointer to the head of list_t list
 * @str: string to add to list_t list
 *
 * Return: address of the new element or NULL if function fails
 */

list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *d;
	list_t *new;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	d = strdup(str);
	if (d == NULL)
	{
		free(new);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	new->str = d;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

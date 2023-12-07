#include "lists.h"

/**
 * add_dnode - adds a new node at the beginning of a doubly-linked list
 * head: pointer to head of linked list
 * @n: integer to be stored in node
 * Return: the address of the new node
 *         NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = *head;

	if (*head != NULL)
		(*head)->prev = newnode;

	*head = newnode;

	return (newnode);
}

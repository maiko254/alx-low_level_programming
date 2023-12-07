#include "lists.h"

/**
 * insert_dnodeint_at_index - insert new node at a given position
 * @h: head of the linked list
 * @idx: index of the list where the new node should be added
 * @n: data to add in the new node
 * Return: the address of the new node
 *         NULL if it fails
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode, *temp;
	unsigned int pos = 0;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;

	temp = *h;
	while (pos < (idx - 1))
	{
		temp = temp->next;
		pos++;
	}

	newnode->next = temp->next;
	newnode->prev = temp;
	temp->next->prev = newnode;
	temp->next = newnode;

	return (newnode);
}

#include "lists.h"

/**
 * add_dnodeint_end - add node at end of doubly linked list
 * @head: pointer to head of linked list
 * @n: integer to add to linked list
 * Return: address of new node
 *         NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode, *temp;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		newnode->next = *head;
		*head = newnode;
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = newnode;
		newnode->prev = temp;
	}

	return (newnode);
}

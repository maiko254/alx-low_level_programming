#include "lists.h"

/**
 * add_nodeint - adds new node at the beginning of a listint_t list
 * @head: pointer to the head of listint_t
 * @n: integer to add at beginning of listint_t list
 *
 * Return: address of the new element or NULL if function fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;

	*head = newnode;

	return (newnode);
}

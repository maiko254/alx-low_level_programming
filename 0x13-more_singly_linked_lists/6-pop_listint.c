#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 *
 * @head: pointer to head of listint_t list
 *
 * Return: data in head node or 0 if linked list is empty
 */

int pop_listint(listint_t **head)
{
	listint_t *del;
	int i;

	if (*head == NULL)
		return (0);

	del = *head;
	i = (*head)->n;
	*head = (*head)->next;

	free(del);

	return (i);
}

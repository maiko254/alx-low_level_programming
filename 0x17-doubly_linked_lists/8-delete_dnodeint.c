#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node in a doubly-linked list
 * @head: head of the linked list
 * @index: index of the node that should be deleted
 * Return: 1 if successful
 *         -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int pos = 0;

	if (*head == NULL)
		return (-1);

	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		temp->prev = NULL;
		free(temp);
		return (1);
	}

	while (pos < index)
	{
		temp = temp->next;
		pos++;
	}

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	temp->next->prev = temp->prev;
	temp->prev->next = temp->next;
	free(temp);
	return (1);
}

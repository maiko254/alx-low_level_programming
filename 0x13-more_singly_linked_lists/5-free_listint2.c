#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 * @head: pointer to head of a listint_t list
 */
void free_listint2(listint_t **head)
{
	listint_t *t;

	if (head == NULL)
		return;

	while (*head)
	{
		t = (*head)->next;
		free(*head);
		*head = t;
	}

	head = NULL;
}

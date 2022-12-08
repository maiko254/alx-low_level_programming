#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *t;

	while (head)
	{
		t = head->next;
		free(head);
		head = t;
	}
}

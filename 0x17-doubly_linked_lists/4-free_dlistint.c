#include "lists.h"

/**
 * free_dlistint - frees memory allocated to a doubly linke list
 * @head: pointer to the head of a doubly linked list
 * Return: void
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}

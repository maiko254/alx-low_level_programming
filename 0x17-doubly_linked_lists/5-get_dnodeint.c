#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of dlistint_t linked list
 * @head: pointer to head of doubly linked list
 * @index: index of node to get
 *
 * Return: NULL - if node doesn't exist
 *         nth node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

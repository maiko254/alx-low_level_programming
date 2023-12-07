#include "lists.h"

/**
 * get_dnodeint_at_index - gets the nth node of a doubly-linked list
 * @head: the head of the linked list
 * @index: index of the node starting from 0
 * Return: the node
 *         NULL if it doesn't exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *nth;
	unsigned int pos = 0;

	nth = head;
	while (pos < index)
	{
		if (nth == NULL)
			return (NULL);

		nth = nth->next;
		pos++;
	}

	return(nth);
}

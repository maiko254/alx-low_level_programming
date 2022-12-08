#include "lists.h"

/**
 * dlistint_len - gets the number of elements in a linked dlistint_t list
 * @h: pointer to linked list
 *
 * Return: number of elements in linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *node = h;
	unsigned int i = 0;

	while (node != NULL)
	{
		node = node->next;
		i++;
	}

	return (i);
}

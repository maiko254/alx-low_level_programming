#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints all elements of a dlistint_t list
 * @h: pointer to dlistint_t list
 *
 * Return: number of nodes in list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	unsigned int i = 0;

	while (node != NULL)
	{
		printf("%d\n", node->n);
		node = node->next;
		i++;
	}

	return (i);
}

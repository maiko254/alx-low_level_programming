#include "lists.h"

/**
 * print_dlistint - prints elements of a doubly-linked list
 * @h: pointer to head of the linked list
 * Return: number of nodes in the linked list
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (0);

	temp = h;
	while (temp != NULL)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		count++;
	}

	return (count);
}

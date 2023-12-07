#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a linked-list
 * @h: pointer to header of linked list
 * Return: the number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp;
	size_t count = 0;

	if (h == NULL)
		return (count);

	temp = h;
	while (temp != NULL)
	{
		temp = temp->next;
		count++;
	}

	return (count);
}

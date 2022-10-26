#include "lists.h"

/**
 * listint_len - finds number of elements in a linked listint_t list
 * @h: linked listint_t list
 *
 * Return: number of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}

	return (i);
}

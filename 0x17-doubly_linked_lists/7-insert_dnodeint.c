#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index -  inserts a new node at a given position
 * @h: pointer to head o list
 * @idx: index of list to insert node
 * @n: integer value to add to new node
 *
 * Return: NuLL - if function fails
 *         the address of the new node - otherwise
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *t = *h;
	unsigned int i;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
		return (add_dnodeint(h, n));

	for (i = 0; i < (idx - 1); i++)
	{
		t = t->next;
		if (t == NULL)
			return (NULL);
	}

	if (t->next == NULL)
		return (add_dnodeint_end(h, n));

	new->next = t->next;
	new->prev = t;
	t->next->prev = new;
	t->next = new;

	return (new);
}

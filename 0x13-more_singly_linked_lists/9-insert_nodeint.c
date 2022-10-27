#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer to head of listint_t linked list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to new node
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *t, *new;
	unsigned int i;

	t = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = t;
		*head = new;
		return (new);
	}

	for (i = 0; i < (idx - 1); i++)
	{
		if (t == NULL || t->next == NULL)
			return (NULL);

		t = t->next;
	}

	new->next = t->next;
	t->next = new;

	return (new);
}

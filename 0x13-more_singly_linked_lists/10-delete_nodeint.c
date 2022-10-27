#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at a given index
 * @head: pointer to head of a listint_t linked list
 * @index:  index of the node that should be deleted
 *
 * Return: 1 if node is deleted, -1 if it fails
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *t, *del;
	unsigned int i;

	del = *head;

	if (del == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(del);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (del->next == NULL)
			return (-1);

		del = del->next;
	}

	t = del->next;
	del->next = t->next;
	free(t);
	return (1);

	
}

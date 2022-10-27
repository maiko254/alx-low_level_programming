#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list
 * @head: pointer to head of listint_t linked list
 * @index: index of the node to get
 *
 * Return: node at index or NULL if node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
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

#include "lists.h"

/**
 * sum_dlistint - gets sum of all the data (n) of a dlistint_t linked list
 * @head: pointer to head of list
 *
 * Return: 0 - if list is empty
 *         sum of all data(n) - otherwise
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

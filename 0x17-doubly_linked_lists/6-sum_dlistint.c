#include "lists.h"

/**
 * sum_dlistint - return the sum of all the data (n) in a double linked list
 * @head: head of the linked list
 * Return: sum of all data (n)
 *         0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *temp;

	if (head == NULL)
		return (0);

	temp = head;
	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}

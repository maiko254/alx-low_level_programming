#include "lists.h"

/**
 * sum_listint - adds all data (n) of a listint_t linked list
 * @head: pointer to head of  listint_t linked list
 *
 * Return: sum of all data of listint_t or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

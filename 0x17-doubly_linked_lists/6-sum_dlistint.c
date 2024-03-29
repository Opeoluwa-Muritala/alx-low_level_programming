#include "lists.h"
/**
 * sum_dlistint - sum of all int in the list
 * @head: start of the list
 * Return: sum else 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum = sum + head->n;

		head = head->next;
	}

	return (sum);
}

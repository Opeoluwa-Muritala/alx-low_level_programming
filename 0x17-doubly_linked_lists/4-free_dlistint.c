#include "lists.h"

/**
 * free_dlistint- free memory allocated using malloc
 * @head: start of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head)
	{
		current = head->next;

		free(head);

		head = current;
	}
}

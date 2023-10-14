#include "lists.h"

/**
 * free_dlistint- free memory allocated using malloc
 * @head: start of the list
 *
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current->next != NULL)
	{
		dlistint_t *freed = current;

		free(freed);

		current = current->next;
	}
}

#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of list
 * @head: pointer to the starting node
 * @n: The integer in the node
 *
 * Return: If the function fails NULL
 * Otherwise - the address of the node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		exit(1);

	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;

	return (new_node);
}

#include "lists.h"

/**
 * add_dnodeint_end - add a new node at the end of the list
 * @head: beginning of the list
 * @n: value of element in list
 *
 * Return: The new node
 */


dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;
	new_node->next = NULL;

	if (new_node == NULL)
	{
		exit(2);
	}

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}

	current = *head;

	while (current->next != NULL)
	{
		current = current->next;
	}

	current->next = new_node;
	new_node->prev = current;

	return (new_node);
}

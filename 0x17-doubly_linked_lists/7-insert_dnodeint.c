#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node in a dlistint_t
 *                            list at a given position.
 * @h: A pointer to the head of the dlistint_t list.
 * @idx: The position to insert the new node.
 * @n: The integer for the new node to contain.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - the address of the new node.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));

	new_node->n = n;

	current = *h;

	for (; idx != 0; idx--)
	{
		if (h == NULL)
			return (NULL);
		current = current->next;
	}
	current->prev->next = new_node;
	new_node->prev = current->prev;
	new_node->next = current;
	return (new_node);
}

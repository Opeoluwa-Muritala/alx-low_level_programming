#include "lists.h"

/**
 * dlistint_len- the number of elements in a list
 * @h: first node
 *
 * Return: Number of Nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}

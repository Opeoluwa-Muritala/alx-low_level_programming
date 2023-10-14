#include "lists.h"
#include <stdio.h>
/**
 * print_dlistint - Print The count of elements in doubly linked list
 * @h: the first node
 *
 * Return: The number of elements
 */


size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

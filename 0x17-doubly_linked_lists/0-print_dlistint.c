#include "lists.h"

/**
 * print_dlistint - a function that prints all the elements
 * of a dlistint_t list.
 * @h: element of the list
 * Return:  number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count;

	while (h != NULL)
	{
		printf("%d/n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}

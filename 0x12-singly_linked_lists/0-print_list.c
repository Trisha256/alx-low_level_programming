#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @*h: singly linked lists
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s", 0, "(nil)");
		else
			printf("[%d] %s", h->len, h->str);
		h = h->next;
		nodes++;
	}
	return (nodes);
}


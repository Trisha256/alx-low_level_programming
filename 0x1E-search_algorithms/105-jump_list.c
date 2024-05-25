#include "search_algos.h"
#include <math.h>
#include <stdio.h>

/**
 * jump_list - Searches for a value in a sorted list of integers using Jump search
 *
 * @list: Pointer to the head of the list to search in
 * @size: Number of nodes in the list
 * @value: The value to search for
 *
 * Return: Pointer to the first node where the value is located,
 *         or NULL if the value is not present or if the head is NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t step, prev_idx;
	listint_t *current, *next;

	if (list == NULL || size == 0)
		return (NULL);

	step = sqrt(size);
	current = list;
	next = list->next;
	prev_idx = 0;

	while (next && next->n < value)
	{
		prev_idx = current->index;
		for (size_t i = 0; i < step && next; i++)
		{
			current = next;
			next = next->next;
		}

		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);
	}

	printf("Value found between indexes [%lu] and [%lu]\n",
	       prev_idx, current->index);

	while (current)
	{
		printf("Value checked at index [%lu] = [%d]\n",
		       current->index, current->n);

		if (current->n == value)
			return (current);

		current = current->next;
	}

	return (NULL);
}

#include "lists.h"

/**
 * sum_listint -  a function that returns the sum of all the data
 * (n) of a listint_t linked list.
 * @head: pointer to the first node
 * Return: integer
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *_current;

	_current = head;

	while (_current != NULL)
	{
		sum += _current->n;
		_current = _current->next;
	}
	return (sum);
}

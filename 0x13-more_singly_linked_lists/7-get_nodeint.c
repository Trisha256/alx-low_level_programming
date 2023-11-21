#include "lists.h"

/**
 * get_nodeint_at_index -  a function that returns the nth node of
 * a listint_t linked list.
 * @head: pointer to the first node
 * @index: index of the node
 * Return: n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *_current;

	_current = head;

	while (_current != NULL && index > 0)
	{
		_current = _current->next;
		index--;
	}
	if (_current == NULL)
	{
	return (NULL);
	}

	return (_current);
}

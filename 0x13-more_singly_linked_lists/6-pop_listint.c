#include "lists.h"

/**
 *  pop_listint - a function that deletes the head node of a listint_t
 *  linked list, and returns the head node’s data (n).
 *  @head: pointer to the first node
 *  Return: integer
 */

int pop_listint(listint_t **head)
{
	listint_t *_current;
	int _data;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}

	_current = *head;
	*head = _current->next;
	_data = _current->n;
	free(_current);

	return (_data);
}

#include "lists.h"

/**
 * free_listint2 -  a function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *_current;
	listint_t *next;

	if (head == NULL)
		return;
	_current = *head;

	while (_current != NULL)
	{
		next = _current->next;
		free(_current);
		_current = next;
	}
	*head = NULL;
}

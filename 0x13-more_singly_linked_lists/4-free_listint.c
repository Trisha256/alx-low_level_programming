#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: pointer to the first node
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *_current;

	while (head != NULL)
	{
		_current = head;
		head = head->next;
		free(_current);
	}
}



#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node
 * at a given position.
 * @head: pointer to the first node
 * @idx: ...
 * @n: ....
 * Return: ...
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *_newnode;
	listint_t *current;
	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	_newnode = malloc(sizeof(listint_t));
	if (_newnode == NULL)
	{
		return (NULL);
	}

	_newnode->n = n;

	if (idx == 0)
	{
		_newnode->next = *head;
		*head = _newnode;
		return (_newnode);
	}

	while (current != NULL && count < idx - 1)
	{
		current = current->next;
		count++;
	}
	if (current ==  NULL)
	{
		free(_newnode);
		return (NULL);
	}

	_newnode->next = current->next;
	current->next = _newnode;

	return (_newnode);
}

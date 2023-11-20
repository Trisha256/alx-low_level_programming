#include "lists.h"

/**
 * add_nodeint - function that adds new node to the begining
 * @head: pointer to the first node
 * @n: integer
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *_newnode;

	_newnode = malloc(sizeof(listint_t));
	if (_newnode == NULL)
	{
	return (NULL);
	}
	_newnode->n = n;
	_newnode->next = *head;
	*head = _newnode;
	return (_newnode);
}

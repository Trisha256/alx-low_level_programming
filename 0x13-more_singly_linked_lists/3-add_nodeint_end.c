#include "lists.h"

/**
 * add_nodeint_end - adds a node to the end of the list
 * @head: pointer to the first node
 * @n: integer
 * Return: newnode
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	current = *head;

	if (current == NULL)
		*head = newnode;
	else
	{
		while (current->next != NULL)
		current = current->next;
		current->next = newnode;
	}
	return (newnode);
}


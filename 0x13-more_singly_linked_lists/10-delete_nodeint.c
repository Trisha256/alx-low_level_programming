#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index
 * index of a listint_t linked list.
 * @head: pointer to the first node
 * @index: index node that should be deleted
 * Return: int
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tempo;
	listint_t *current;
	unsigned int count = 0;
	listint_t *node_to_delete;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		tempo = *head;
		*head = (*head)->next;
		free(tempo);
		return (1);
	}

	current = *head;
	while (current != NULL && count < index - 1)
	{
		current = current->next;
		count++;
	}
	if (current == NULL || current->next == NULL)
	{
		return (-1);
	}
	node_to_delete = current->next;
	current->next = node_to_delete->next;
	free(node_to_delete);

	return (1);
}


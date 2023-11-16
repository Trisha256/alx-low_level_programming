#include "lists.h"

/**
 * *add_node - adds a new node at the beginning of a list_t list.
 * @head: first pointer
 * @str: string
 * Return: str
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *Newnode;
	unsigned int p, count = 0;

	Newnode = malloc(sizeof(list_t));
	if (Newnode == NULL)
	return (NULL);
	Newnode->str = strdup(str);
	for (p = 0; str[p] != '\0'; p++)
	count++;
	Newnode->len = count;
	Newnode->next = *head;
	*head = Newnode;
	return (*head);
}

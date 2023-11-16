#include "lists.h"

/**
* *add_node_end - a function that adds a new node at the
* end of a list_t list.
* @head: pointer to the first node
* @str: string
* Return: head
*/
list_t *add_node_end(list_t **head, const char *str)
{
list_t *Newnode, *Tmp;
unsigned int p, count = 0;

Newnode = malloc(sizeof(list_t));
if (Newnode == NULL)
return (NULL);
Newnode->str = strdup(str);
for (p = 0; str[p] != '\0'; p++)
count++;
Newnode->len = count;
Newnode->next = NULL;
Tmp = *head;

if (Tmp == NULL)
*head = Newnode;
else
{
while (Tmp->next != NULL)
Tmp = Tmp->next;
Tmp->next = Newnode;
}
return (*head);
}

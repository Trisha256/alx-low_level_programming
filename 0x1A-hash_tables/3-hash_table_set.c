#include "hash_tables.h"

/**
 *  hash_table_set -  a function that adds an element to the hash table.
 *  @ht: is the hash table you want to add or update the key/value to
 *  @key: is the key (must not be an empty string)
 *  @value: is the value associated with the key.
 *  Return: 1 if it succeeded, 0 otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node;

	if (ht == NULL || key == NULL || *key == '\0')
	{
		return (0); /* invalid hash table */
	}

	index = key_index((const unsigned char *)key, ht->size);

	/* create a new hash node */

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
	{
		return (0); /* failed to allocate memory */
	}

	/* Duplicate the key and value */

	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0); /* failed to duplicate key or value */
	}

	/* Handling collision by adding a new node at the begining of the list */
	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}

#include "main.h"
#include <string.h>

/**
 * *_realloc - a function that reallocates a memory
 * block using malloc and free
 * @ptr: void pointer
 * @old_size: size of the pointer ptr
 * @new_size: size of the new pointer
 * Return: ptr
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	size_t copy_size;
	void *new_ptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
	copy_size = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);
	free(ptr);
	return (new_ptr);
}

#include "main.h"
#include <string.h>

/**
 * *_calloc - a function that allocates memory for an array, using malloc
 * @nmemb: - number of elements of the array
 * @size: size of the elements in bytes
 * Return: void pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	memset(ptr, 0, nmemb * size);
	return (ptr);
}

#include "search_algos.h"
#include <stdio.h>

/**
 * linear_search - Searches for a value in an array using linear search
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if the array is NULL or the value is not found
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (array == NULL)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
	}

	return (-1);
}

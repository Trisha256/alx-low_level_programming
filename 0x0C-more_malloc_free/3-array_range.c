#include "main.h"
#include <string.h>

/**
 * *array_range - a function that creates an array of integers.
 * @min: smallest member of array
 * @max: largest member of the array
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
	int *arr;
	int size;
	int i;

	if (min > max)
	{
		return (NULL);
	}
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		arr[i] = min + i;
	}
	return (arr);
}

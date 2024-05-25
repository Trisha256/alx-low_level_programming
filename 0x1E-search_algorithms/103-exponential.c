#include "search_algos.h"
#include <stdio.h>

int binary_search(int *array, size_t left, size_t right, int value);
void print_array(int *array, size_t left, size_t right);

/**
 * exponential_search - Searches for a value in a sorted array using Exponential search
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: The value to search for
 *
 * Return: The first index where the value is located,
 *         or -1 if the array is NULL or the value is not found
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound = 1;
	size_t prev_bound = 0;
	int result;

	if (array == NULL)
		return (-1);

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		prev_bound = bound;
		bound *= 2;
	}

	if (bound >= size)
		bound = size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", prev_bound, bound);

	result = binary_search(array, prev_bound, bound, value);
	return result;
}

/**
 * binary_search - Searches for a value in a sorted array using Binary search
 *
 * @array: Pointer to the first element of the array to search in
 * @left: The left bound of the search range
 * @right: The right bound of the search range
 * @value: The value to search for
 *
 * Return: The index where the value is located,
 *         or -1 if the value is not found
 */
int binary_search(int *array, size_t left, size_t right, int value)
{
	size_t mid;

	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		print_array(array, left, right);
		if (array[mid] == value)
			return (mid);

		if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

/**
 * print_array - Prints the elements of an array within a given range
 *
 * @array: Pointer to the first element of the array
 * @left: The left bound of the range
 * @right: The right bound of the range
 */
void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i != right)
			printf(", ");
	}
	printf("\n");
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  a function that executes a function given as a parameter
 * on each element of an array.
 * @size: size of the array
 * @action:  a pointer to the function you need to use
 * @array: array to iterate over
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array != NULL && action != NULL && size > 0)
	{
		for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
	}
}

#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @size: the number of elements in an array
 * @array: array to search
 * @cmp: the fuction pointer for the comparison function
 * Return: integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size >= 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]) != 0)
					return (i);
				i++;
			}
		}
	}
	return (-1);
}

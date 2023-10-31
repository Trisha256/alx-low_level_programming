#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * *str_concat -  a function that concatenates two strings.
 * @s1: string  1
 * @s2: string 2
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	size_t size1 = strlen(s1);
	size_t size2 = strlen(s2);

	if (s1 == NULL)
		return (" ");
	if (s2 == NULL)
		return (" ");
	result = (char *)malloc(size1 + size2 + 1);
	if (result == NULL)
		return (NULL);
	memcpy(result, s1, size1);
	memcpy(result + size1, s2, size2 + 1);
	return (result);
}

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

	if (s1 == NULL || s2 == NULL)
	{
		s1 = (s1 == NULL)? "" :s1;
		s2 = (s2 == NULL)? "" :s2;
	}
	result = (char *)malloc(size1 + size2 + 1);
	if (result == NULL)
		return (NULL);
	strcpy(result, s1);
	strcat(result, s2);
	return (result);
}

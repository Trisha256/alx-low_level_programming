#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
 * *str_concat -  a function that concatenates two strings.
 * @s1: string  1
 * @s2: string 2
 * Return: concatenated strings
 */

char *str_concat(char *s1, char *s2)
{
	char *result;
	int i = 0;
	int j = 0;
	int k = 0;
	int l = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	l = i + j;
	result = malloc((l * sizeof(char)) + 1);
	if (result == NULL)
		return (NULL);
	j = 0;
	while (k < l)
	{
		if (k <= i)
			result[k] = s1[k];
		if (k >= i)
		{
			result[k] = s2[j];
				j++;
		}
		k++;
	}
	result[k] = '\0';
	return (result);
}
